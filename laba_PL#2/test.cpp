#include "header.h"
TEST(TestGroupName, Subtest_1) {
    char arr[3] = {'1','2','3'};
    int a = Intenger(arr);
    ASSERT_EQ(123,a);
}

TEST(TestGroupName, Subtest_2) {
    char arr[5] = {'1','2','3','4','5'};
    int a = Intenger(arr);
    ASSERT_EQ(12345,a);
}

TEST(TestGroupName, Subtest_3) {
    int cnt = 0;
    char arr[6] = {'1','2','3','4','5','+'};
    char res[5] = {'1','2','3','4','5'};
    ASSERT_FALSE(strcmp(element(arr,cnt), "12345"));
}

TEST(TestGroupName, Subtest_4) {
int cnt = 5;
    char arr[6] = {'1','2','3','4','5','+'};
    char res[5] = {'1','2','3','4','5'};
    ASSERT_FALSE(strcmp(element(arr,cnt), "+"));
}

TEST(TestGroupName, Subtest_5) {
    char arr[1] = {'*'};
    int answ = 0;
    ASSERT_EQ(answ ,isSign(arr));
}

TEST(TestGroupName, Subtest_6) {
    char arr[1] = {'3'};
    int answ = 0;
    ASSERT_TRUE(answ == isSign(arr));
}

TEST(TestGroupName, Subtest_7) {
    char arr[1] = {'D'};
    bool answ = true;
    ASSERT_TRUE(answ && isChar(arr));
}

TEST(TestGroupName, Subtest_8) {
    char arr[1] = {'3'};
    bool answ = false;
    ASSERT_EQ(answ,isChar(arr));
}

TEST(TestGroupName, Subtest_9) {
    int cnt = 0;
    char arr[7] = {'1','2','+','4','5','*','2'};
    int res = 102;
    ASSERT_EQ(Direct(arr,cnt),res);
}


int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
