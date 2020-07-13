#include "UnitTest++/UnitTest++.h"
#include "Player.h"
int main(int, const char *[])
{
    return UnitTest::RunAllTests();
}
TEST(Sanity)
{
    CHECK_EQUAL(1, 1);
}
