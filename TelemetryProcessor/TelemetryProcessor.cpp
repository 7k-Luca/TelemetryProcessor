// TelemetryProcessor.cpp
#include <iostream>
#include <cstring>	
#include <nlohmann/json.hpp> 
/*
	Steps to Add Library
	____________________
	- Download the Library off Github
	- Open IDE (I used VS I don't know if its the same for any other)
	- Open Solution Explorer
	- Right-Click on project's name and select "properties"
	- Navigate to Configuration Properties > VC++ Directories
	- In "Include Directories" field, add the path ot the `include` folder that was extracted from Github
*/
using json = nlohmann::json;
#define PORT 9000 // TCP Server -- listening on port 9000


int main() {
	

}

// steps for server = Socket -> setSockopt -> Bind -> Listen -> Accept -> Send/Receive
// function designed for chat between client and server
void serv(int connfd) {

}