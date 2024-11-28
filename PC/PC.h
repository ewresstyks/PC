#pragma once
#include <string>
#include <iostream>
using namespace std;

class PC {
protected:
    string name;
    string cpu;
    string gpu;
    string ssd;
    string ram;
    double price;
public:
    PC() = default;
    PC(string _name, string _cpu, string _gpu, string _ssd, string _ram)
        :name(_name), cpu(_cpu), gpu(_gpu), ssd(_ssd), ram(_ram), price(0) {}
    virtual double getPrice();
    virtual void Print();
};

class OfficePC :public PC {
    string micro;
public:
    OfficePC() = default;
    OfficePC(string _name, string _cpu, string _gpu, string _ssd, string _ram, string _micro)
        :PC(_name, _cpu, _gpu, _ssd, _ram)
    {
        micro = _micro;
        price = 52000;
    }
    void Print() {
        PC::Print();
        cout << "Micro - " << micro << endl;
    }
    double getPrice() {
        cout << "Price PC - 52000" << endl;
        cout << "Price Micro - 1000" << endl;
        price += 1000;
        return price;
    }
};

class GameePC :public PC {
    string headphones;
    string keyb;
public:
    GameePC() = default;
    GameePC(string _name, string _cpu, string _gpu, string _ssd, string _ram, string _headphones, string _keyb)
        :PC(_name, _cpu, _gpu, _ssd, _ram)
    {
        keyb = _keyb;
        headphones = _headphones;
        price = 66000;
    }
    void Print() {
        PC::Print();
        cout << "Headphones - " << headphones << endl << "Keyboard" << keyb;
    }
    double getPrice() {
        cout << "Price PC - 66000" << endl;
        cout << "Price Headphones - 7000" << endl;
        cout << "Price keyboard - 3000" << endl;
        price += 10000;
        return price;
    }
};

class HomePC :public PC {
    string webca;
public:
    HomePC() = default;
    HomePC(string _name, string _cpu, string _gpu, string _ssd, string _ram, string _webca)
        :PC(_name, _cpu, _gpu, _ssd, _ram)
    {
        webca = _webca;
        price = 76000;
    }
    void Print() {
        PC::Print();
        cout << "Cam - " << webca << endl;
    }
    double getPrice() {
        cout << "Price PC - 76000" << endl;
        cout << "Price Cam - 5000" << endl;
        price += 5000;
        return price;
    }
};