// TelemetryProcessor.cpp
#include <iostream>
#include <cstring>
// #include <sys/socket.h>
#include <winsock2.h>
#include <netinet/in.h> // don't have this library installed
#include <unistd.h> // don't have this library installed
#define PORT 9000 // TCP Server -- listening on port 9000


int main() {
	

}

// steps for server = Socket -> setSockopt -> Bind -> Listen -> Accept -> Send/Receive
// function designed for chat between client and server
void serv(int connfd) {

}