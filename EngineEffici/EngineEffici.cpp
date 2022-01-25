// EngineEffici.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Engine
{
public:
    double work, heat;
    Engine(double a, double b)
    {
        work = a;
        heat = b;
    }
    virtual double GetEfficiency()
    {
        std::cout << "Base Engine";
        return 0;
    }
};

class InternalCombustineEngine : public Engine 
{
public :
    InternalCombustineEngine(double a, double b) : Engine(a, b) {}
    double GetEfficiency()
    {
        std::cout << "\n Internal Combustine Engine Efficiency";
        return work / heat * 100;
    }
};

class ExternalCombustineEngine : public Engine
{
public:
    ExternalCombustineEngine(double a, double b) : Engine(a, b) {}
    double GetEfficiency()
    {
        std::cout << "\n External Combustine Engine Efficiency \t";
        return work / heat * 100;
    }
};

class PetrolEngine : public Engine
{
public:
    PetrolEngine(double a, double b) : Engine(a, b) {}
    double GetEfficiency()
    {
        std::cout << "\n Petrol Engine Efficiency \t";
        return work / heat * 100;
    }
};

class DieselEngine : public Engine
{
public:
    DieselEngine(double a, double b) : Engine(a, b) {}
    double GetEfficiency()
    {
        std::cout << "\n Diesel Engine Efficiency \t";
        return work / heat * 100;
    }
};

class StreamEngine : public Engine
{
public:
    StreamEngine(double a, double b) : Engine(a, b) {}
    double GetEfficiency()
    {
        std::cout << "\n Stream Engine Efficiency \t";
        return work / heat * 100;
    }
};



int main()
{
    int num;
    std::cout << "\n 1.Internal Combustine Engine Efficiency \n 2.External Combustine Engine \n 3.Petrol Engine \n 4.Diesel Engine \n 5.Stream Engine";
    Engine *e;
    std::cin >> num;
    if (num == 1)
    {
        int in, out;
        std::cout << "\n Enter the Work done By the Internal Combustine Engine";
        std::cin >> in;
        std::cout << "\n Enter the Heat of the Internal Combustine Engine ";
        std::cin >> out;
        InternalCombustineEngine i(in, out);
        e = &i;
        std::cout << e->GetEfficiency();
    }
    else if (num == 2) 
    {
        int in, out;
        std::cout << "\n Enter the Work done By the External Combustine Engine";
        std::cin >> in;
        std::cout << "\n Enter the  Heat of the External Combustine Engine";
        std::cin >> out;
        ExternalCombustineEngine c(in, out);
        e = &c;
        std::cout << e->GetEfficiency();
    }
    else if (num == 3)
    {
        int in, out;
        std::cout << "\n Enter the Work done By the Petrol Engine";
        std::cin >> in;
        std::cout << "\n Enter the  Heat of the  Petrol Engine";
        std::cin >> out;
        PetrolEngine p(in, out);
        e = &p;
        std::cout << e->GetEfficiency();
    }
    else if (num == 4)
    {
        int in, out;
        std::cout << "\n Enter the Work done By the Diesel Engine";
        std::cin >> in;
        std::cout << "\n Enter the  Heat of the  Diesel Engine";
        std::cin >> out;
        DieselEngine d(in, out);
        e = &d;
        std::cout << e->GetEfficiency();
    }
    else if (num == 5)
    {
        int in, out;
        std::cout << "\n Enter the Work done By the Stream Engine";
        std::cin >> in;
        std::cout << "\n Enter the  Heat of the  Stream Engine";
        std::cin >> out;
        StreamEngine s(in, out);
        e = &s;
        std::cout << e->GetEfficiency();
    }
    else
    {
        std::cout << "\n Invalid Value ";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

