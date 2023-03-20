# MQChat Application

## Description
This chat application is built using ZeroMQ and C++ and features a simple console interface for communication between two users.

## Usage
To run the application, make sure you have the following installed:

- cmake (`brew install cmake`)
- make (`brew install make`)
- gcc (`brew install gcc`)
- libzmq (`brew install libzmq`)
- cppzmq (`brew install cppzmq`)

After installing the dependencies, you can run the application by executing the following commands:

### Build

```bash
$ mkdir cmake-build-default
$ cd cmake-build-default
$ cmake ..
$ make
```

## Run chat application
```bash
# Open first iTerm2 window and run subscriber
osascript -e 'tell application "iTerm" to activate' -e 'tell application "iTerm" to create window with default profile' -e 'tell application "iTerm" to tell current session of current window to write text "~/CLionProjects/ZeroMQChat/cmake-build-default/ZeroMQChat subscriber"'

# Open second iTerm2 window and run publisher
osascript -e 'tell application "iTerm" to activate' -e 'tell application "iTerm" to create window with default profile' -e 'tell application "iTerm" to tell current session of current window to write text "~/CLionProjects/ZeroMQChat/cmake-build-default/ZeroMQChat publisher"'
```

### Subscriber

Open the first terminal and run the following command:

```bash
./cmake-build-default/ZeroMQChat subscriber
```

### Subscriber

Open the first terminal and run the following command:

```bash 
./cmake-build-default/ZeroMQChat publisher
```


