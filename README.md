# INTRO

![logo](https://github.com/muhammadtalhasami/bank_managment_system/blob/main/BANK%20MANAGNMENT%20SYSTEM%20OOPS%20PROJECT/project_images/Screenshot%20(61).png)

Project_Name:- BANK MANAGNMENT SYSTEM
Concepts_Used = Inheritance , Polymorphism

# KEY_FEATURES

OOPS Object-Oriented Programming. It is a programming paradigm that utilizes the concept of "objects," 
which encapsulate data and behavior. The key principles of OOPS include encapsulation, inheritance, and polymorphism, providing a 
modular and organized approach to software development. OOPS facilitates the design and implementation of software systems by 
modeling real-world entities as objects with attributes and methods, promoting code reusability and maintainability.
    
# PROJECT_INFO

    OTP Class:
        The OTP class is designed to generate a one-time password with a specified expiration time (60 seconds in this case).
        It has methods to retrieve the OTP value (getValue()) and check if it has expired (isExpired()).

    OTPManager Class:
        The OTPManager class is responsible for managing OTPs.
        It contains a pointer to an OTP object and functions to generate OTPs (generateOTP()) and verify them (verifyOTP()).

    BankManagement Class:
        This class includes various functions for managing a bank account, such as checking account details, withdrawing funds, adding funds, transferring funds, generating a new card, checking card expiration, calculating annual interest, and providing emergency contact information.
        It uses the OTPManager class for generating and verifying OTPs during transactions.

    Main Function:
        The main function serves as the entry point of the program.
        It prompts the user for a name and password, then checks if the provided credentials match predefined values. If correct, it allows the user to access the bank management system.
        Inside a loop, the user can choose various options based on the functionalities provided by the BankManagement class. The loop continues until the user decides to exit.
