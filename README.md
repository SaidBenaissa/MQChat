# zeroMQ chat application

## Description
Chat application using zeroMQ and c++ with a simple console interface
for chat between two users.

## Usage
In order to run the application you need to have installed the following:

- cmake (`brew install cmake`)
- make (`brew install make`)
- gcc (`brew install gcc`)
- libzmq (`brew install libzmq`)
- cppzmq (`brew install cppzmq`)

After installing the dependencies you can run the application by running the following commands:
### Build

```bash
$ mkdir cmake-build-default
$ cd cmake-build-default
$ cmake ..
$ make
```

### Run
#### subscriber - pen first terminal and run the following command:

```bash subscriber
$ ./cmake-build-default/my_zeroMQ_project subscriber
```

#### publisher - pen second terminal and run the following command:

```bash publisher
$ ./cmake-build-default/my_zeroMQ_project publisher
```

