#include "pch.h"
#include "../ConsoleApplication1/BankAccount.h"


TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(AccountTest, DefaultContructor_test) {
	BankAccount bankAccount;
	EXPECT_EQ(0, bankAccount.balance);
}

