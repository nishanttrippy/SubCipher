#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "catch.hpp"
#include "fileio.h"
#include "cypher.h"

// Helper function declarations (don't change this)
extern bool CheckTextFilesSame(const std::string& fileNameA,
	const std::string& fileNameB);

// Your tests -- only add sections
TEST_CASE("File Tests", "[student]")
{
	// Test readData function
	SECTION("Checking file reading")
	{
		// TODO: Tests go in here
		
		REQUIRE(true);
		WARN("Passed file reading tests!");
	}

	// Test putData function
	SECTION("Checking file writing")
	{
		// TODO: Tests go in here

		REQUIRE(true);
		WARN("Passed file writing tests!");
	}
}

TEST_CASE("Cypher Tests", "[student]") 
{
	// Test encrypt function
	SECTION("Checking encryption")
	{
		// TODO: Tests go in here

		REQUIRE(true);
		WARN("Passed encryption tests!");
	}

	// Test decrypt function
	SECTION("Checking decryption")
	{
		// TODO: Tests go in here

		REQUIRE(true);
		WARN("Passed decryption tests!");
	}
}


