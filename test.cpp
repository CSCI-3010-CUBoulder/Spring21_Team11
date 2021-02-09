#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("All strings in vector are joined.", "[join]") {
    REQUIRE(Join(std::vector<std::string>(3, "piece"), "glue")=="piecegluepiecegluepiece");
}
