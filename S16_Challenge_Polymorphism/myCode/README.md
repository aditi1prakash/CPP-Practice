# Section 16 - Polymorphism #

You are provided with a completed Account class heirarchy that was completed in Section 1.
The provided class heirarchy does not use dynamic polymorphism (it has no virtual functions!)

Your challenge is the following:

1.  Modify the Account class so that it is now an Abstract class by adding the following pure virtual functions:
    -   virtual bool deposit (double amount) = 0;
    -   virtual bool withdraw (double amount) = 0;

    Hint: You can implement these functions in the Account class if it makes sense

2.  Create an I_Printable class interface and provide functionality so all accounts are printable to an ostream using the overloaded insertion operator. 

        class I_Printable
        {
            friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
            public: 
                virtual void print(std::ostream &os) const = 0;
                virtual ~I_Printable() = default;
        };


3.  Modify the functions in the Account_Util files so we only have one version of each. For example,

        void display(const std::vector<Account *> &accounts);
        void deposit(const std::vector<Account *> &accounts, double amount);
        void withdraw(const std::vector<Account *> &accounts, double amount);


4.  Test your code with base class pointers as well as local objects. A sample main driver is provided to get you started.


Hints:
-   Reuse existing functionality!!
-   If your class has a virtual function then be sure to implement a virtual destructor.
    You can have the C++ generate a default destructor for you with:
    virtual ~Class_Name() = default;
-   Take it one step at a time
-   Start by making the Account class abstract by adding the pure virtual functions.