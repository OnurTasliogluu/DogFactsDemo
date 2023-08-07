#include <iostream>
#include "cpphttplib.hpp"

int main(int argc, char **argv) {
	std::cout << "Hello Program" << '\n';

	// HTTP
	httplib::Client cli("http://localhost:4567");

	auto res = cli.Get("/api/facts");
	std::cout<<res->status<<std::endl;
	std::cout<<res->body<<std::endl;
	return 0;
};