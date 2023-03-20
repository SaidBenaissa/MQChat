# Open first iTerm2 window and run subscriber
osascript -e 'tell application "iTerm" to activate' -e 'tell application "iTerm" to create window with default profile' -e 'tell application "iTerm" to tell current session of current window to write text "~/CLionProjects/ZeroMQChat/cmake-build-default/ZeroMQChat subscriber"'

# Open second iTerm2 window and run publisher
osascript -e 'tell application "iTerm" to activate' -e 'tell application "iTerm" to create window with default profile' -e 'tell application "iTerm" to tell current session of current window to write text "~/CLionProjects/ZeroMQChat/cmake-build-default/ZeroMQChat publisher"'
