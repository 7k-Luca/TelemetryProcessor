// TelemetryProcessor.cpp
using namespace std;
#include <iostream>
#include <cstring>	
#include "sockpp/socket.h"
#include "sockpp/connector.h"
#include <nlohmann/json.hpp>

using json = nlohmann::json;


int main() {
	// Initialize the sockpp library
	sockpp::initialize();
	
	try {
		// Create a TCP connector
		sockpp::tcp_connector conn; // error ~~ not identifying tcp_connector

		// Connect to the server, localhost is tentative to change
		conn.connect_tcp("localhost", 9000);

		// Create a JSON object for the handshake data
		json handshake;
		handshake["Length"] = static_cast<int32_t>(5); // Length of Data
		handshake["Data"] = "START"; // Data
		handshake["Field Type"] = "byte"; // Field Types

		// Serialize the JSON object to a string
		string jsonStr = handshake.dump()

		// Send the handshake packet to the server
	}

	

}