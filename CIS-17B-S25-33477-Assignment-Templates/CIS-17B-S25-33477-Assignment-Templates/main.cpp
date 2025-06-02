#include <iostream>
#include <string>
#include <array>
#include <typeinfo>

template<typename T>
class Package {
private:
    T item;
public:
    Package(T i) : item(i) {}
    void label() {
        std::cout << "Generic package containing: " << typeid(T).name() << "\n";
    }
};

// Specialization for std::string
template<>
class Package<std::string> {
private:
    std::string item;
public:
    Package(std::string i) : item(i) {}
    void label() {
        std::cout << "Book package: \"" << item << "\"\n";
    }
};

// Partial specialization for pointers
template<typename T>
class Package<T*> {
private:
    T* item;
public:
    Package(T* i) : item(i) {}
    void label() {
        std::cout << "Fragile package for pointer to type: " << typeid(T).name() << "\n";
    }
};

template<typename T, int Size>
class Box {
private:
    std::array<T, Size> items;
    int count = 0;
public:
    bool addItem(const T& item) {
        if (count < Size) {
            items[count++] = item;
            std::cout << "Added item to box: \"" << item << "\"\n";
            return true;
        }
        return false;
    }

    void printItems() const {
        std::cout << "Box contents:\n";
        for (int i = 0; i < count; ++i) {
            std::cout << " - " << items[i] << "\n";
        }
    }
};

template<typename T>
void shipItem(const T& item) {
    std::cout << "Shipping item of type: " << typeid(T).name() << "\n";
}

template<>
void shipItem(const double& item) {
    std::cout << "Shipping temperature-controlled item: " << item << "°C\n";
}

int main() {
    
    
    Package<int> package(5); //creating a Package<int>
    package.label();
    
    Package<std::string> stringPac("C++ Primer"); //creating a Package<std::string>
    stringPac.label();  //calling label()
    
    Package<double*> *pointerPac = nullptr; //creating a Package<double*>
    pointerPac->label();    //calling label()
    
    Box<std::string, 3> box; //creating Box<std::string, 3> and adding three books
    
    box.addItem("Dune");
    box.addItem("Dracula");
    box.addItem("Moby Dick");
    box.printItems();
    
    std:: string emptyString;
    
    //calling shipItem() on an int, a std::string, and a double
    shipItem(5);
    shipItem(emptyString);
    shipItem(10.50);
    
    return 0;
}
