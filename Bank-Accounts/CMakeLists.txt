cmake_minimum_required(VERSION 3.17)
project(Accounts)

set(CMAKE_CXX_STANDARD 20)

add_executable(Accounts main.cpp Account.cpp Account.h Checking_Account.cpp Checking_Account.h Savings_Account.cpp Savings_Account.h Trust_Account.cpp Trust_Account.h Account_Util.cpp Account_Util.h Printable.cpp Printable.h)