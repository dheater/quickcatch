#include <catch2/catch.hpp>

enum Level
{
    None = 0,
    Error = 1,
    Warning = 2,
    Info = 3,
    Verbose = 4,
};

Level toLevel(std::string level)
{
    std::transform(level.begin(), level.end(), level.begin(),
                   [](unsigned char c){ return std::tolower(c); });
    if("none"  == level) return None;
    if("error" == level) return Error;
    if("warning" == level) return Warning;
    if("info" == level) return Info;
    if("verbose" == level) return Verbose;

    return Info; //default level
}

TEST_CASE("None")
{
    CHECK(None == toLevel("none"));
    CHECK(None == toLevel("None"));
    CHECK(None == toLevel("NONE"));
}

TEST_CASE("Error")
{
    CHECK(Error == toLevel("error"));
    CHECK(Error == toLevel("Error"));
    CHECK(Error == toLevel("ERROR"));
}

TEST_CASE("Warning")
{
    CHECK(Warning == toLevel("warning"));
    CHECK(Warning == toLevel("Warning"));
    CHECK(Warning == toLevel("wARNING"));
}

TEST_CASE("Info")
{
    CHECK(Info == toLevel("info"));
    CHECK(Info == toLevel("Info"));
    CHECK(Info == toLevel("INFO"));
}

TEST_CASE("Verbose")
{
    CHECK(Verbose == toLevel("verbose"));
    CHECK(Verbose == toLevel("Verbose"));
    CHECK(Verbose == toLevel("VERBOSE"));
}

TEST_CASE("Unknown")
{
    CHECK(Info == toLevel("unknown"));
    CHECK(Info == toLevel("Unknonwn"));
    CHECK(Info == toLevel("UNKNOWND"));
}
