import sublime
import sublime_plugin
import time
import os

def create_tmPreferences():
    user_prefs_path = os.path.expanduser(
        "C:\\Users\\ashar\\AppData\\Roaming\\Sublime Text\\Packages\\User\\Default.tmPreferences"
    )
    formatted_datetime = time.strftime('%A, %d.%m.%Y %I:%M %p')

    xml_content = f'''<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
    <key>name</key>
    <string>Globals</string>
    <key>scope</key>
    <string></string>
    <key>settings</key>
    <dict>
        <key>shellVariables</key>
        <array>
            <dict>
                <key>name</key>
                <string>CURRENT_DATETIME</string>
                <key>value</key>
                <string><![CDATA[{formatted_datetime} (GMT+5:30)]]></string>
            </dict>
        </array>
    </dict>
</dict>
</plist>
    '''
    with open(user_prefs_path, "w", encoding="utf-8") as f:
        f.write(xml_content)

class WindowFocusListener(sublime_plugin.EventListener):
    def on_activated(self, view):
        create_tmPreferences()
