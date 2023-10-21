#include <iostream>
#include "sockpp/socket.h"
#include "sockpp/tcp_acceptor.h"

int main() {
	int16_t port = 9000;  // Stores the port number which server will listen for incoming connections
	sockpp::tcp_acceptor acc(port); // Creates an instance of tcp_acceptor
	while (true) {
			sockpp::tcp_socket sock = acc.accept(); // Incoming connections accepted (socket created to communicate with client)

			if (!sock) { // Checking for errors during connection acceptance
				cerr << "Error accepting incoming connection: "
					<< acc.last_error_str() << endl;

			else {
				// ProcessTelemetry is the function we need to define that will handle data processing
				thread thr(ProcessTelemetry, std::move(sock)); // Create a thread to handle communication with client, allows multiple clients to be handled at once
				thr.detach();
			
			}

			}
		}
	}
}
