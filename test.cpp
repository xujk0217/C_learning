#include<string>
#include<iostream>

class Logger{
public:
    void log(std::string logMessage)
        //std::cout<<
};

class Service{
public:
    void doSomething(){
        logger.log("do something");
    }
private:
    Logger logger;
};



int main(){
    Service service;
    service.doSomething();
}