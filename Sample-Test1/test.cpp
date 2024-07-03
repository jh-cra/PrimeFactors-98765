#include "pch.h"
#include "../TDD/primeFactor.cpp"
#include <vector>

using namespace std;

class PrimeFixture : public testing::Test {
public:
	PrimeFactor primeFactor;
	vector<int> expected;
	
};

TEST_F(PrimeFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, primeFactor.of(1));
}

TEST_F(PrimeFixture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, primeFactor.of(2));
}

TEST_F(PrimeFixture, Of3) {
	expected = {3};
	EXPECT_EQ(expected, primeFactor.of(3));
}

TEST_F(PrimeFixture, Of4) {
	expected = { 2, 2 };
	EXPECT_EQ(expected, primeFactor.of(4));
}

TEST_F(PrimeFixture, Of6) {
	expected = { 2, 3 };
	EXPECT_EQ(expected, primeFactor.of(6));
}

TEST_F(PrimeFixture, Of9) {
	expected = { 3, 3 };
	EXPECT_EQ(expected, primeFactor.of(9));
}

