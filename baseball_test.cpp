#include <exception>
#include "baseball.cpp"
#include "gmock/gmock.h"

using namespace testing;

TEST(BaseballGame, ThrowExceptionWhenInputLengthIsUnmached) {
	Baseball game;
	EXPECT_THROW(game.guess(string("12")), std::length_error);
}