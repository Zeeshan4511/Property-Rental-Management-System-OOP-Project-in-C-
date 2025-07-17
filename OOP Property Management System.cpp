#include <iostream>
#include <string>
using namespace std;

// Base Class: Property
class Property {
protected:
    string propertyID;
    string ownerName;
    string location;
    double rentPricePKR;

public:
    Property() {
        propertyID = "";
        ownerName = "";
        location = "";
        rentPricePKR = 0.0;
    }

    virtual void inputDetails() {
        cout << "Enter Property ID: ";
        cin >> propertyID;
        cout << "Enter Owner Name: ";
        cin.ignore();
        getline(cin, ownerName);
        cout << "Enter Location: ";
        getline(cin, location);
        cout << "Enter Rent Price (in PKR): ";
        cin >> rentPricePKR;
    }

    virtual void displayDetails() {
        cout << "Property ID: " << propertyID << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Location: " << location << endl;
        cout << "Rent Price: Rs. " << rentPricePKR << endl;
    }

    string getPropertyID() {
        return propertyID;
    }

    virtual void updateDetails() {
        cout << "Update Owner Name: ";
        cin.ignore();
        getline(cin, ownerName);
        cout << "Update Location: ";
        getline(cin, location);
        cout << "Update Rent Price (in PKR): ";
        cin >> rentPricePKR;
    }
};

// Apartment Class (Child of Property)
class Apartment : public Property {
protected:
    int numberOfRooms;
    int floorNumber;

public:
    Apartment() : Property() {
        numberOfRooms = 0;
        floorNumber = 0;
    }

    void inputDetails() override {
        Property::inputDetails();
        cout << "Enter Number of Rooms: ";
        cin >> numberOfRooms;
        cout << "Enter Floor Number: ";
        cin >> floorNumber;
    }

    void displayDetails() override {
        Property::displayDetails();
        cout << "Number of Rooms: " << numberOfRooms << endl;
        cout << "Floor Number: " << floorNumber << endl;
    }

    void updateDetails() override {
        Property::updateDetails();
        cout << "Update Number of Rooms: ";
        cin >> numberOfRooms;
        cout << "Update Floor Number: ";
        cin >> floorNumber;
    }
};

// One-Bedroom Apartment (Grandchild Class of Apartment)
class OneBedroomApartment : public Apartment {
public:
    OneBedroomApartment() : Apartment() {}

    void inputDetails() override {
        Apartment::inputDetails();
        cout << "One-Bedroom Apartment added successfully!" << endl;
    }

    void displayDetails() override {
        Apartment::displayDetails();
    }

    void updateDetails() override {
        Apartment::updateDetails();
    }
};

// Two-Bedroom Apartment (Grandchild Class of Apartment)
class TwoBedroomApartment : public Apartment {
public:
    TwoBedroomApartment() : Apartment() {}

    void inputDetails() override {
        Apartment::inputDetails();
        cout << "Two-Bedroom Apartment added successfully!" << endl;
    }

    void displayDetails() override {
        Apartment::displayDetails();
    }

    void updateDetails() override {
        Apartment::updateDetails();
    }
};

// House Class (Child of Property)
class House : public Property {
protected:
    string yardSize;
    string garageType;

public:
    House() : Property() {
        yardSize = "";
        garageType = "";
    }

    void inputDetails() override {
        Property::inputDetails();
        cout << "Enter Yard Size: ";
        cin.ignore();
        getline(cin, yardSize);
        cout << "Enter Garage Type: ";
        getline(cin, garageType);
    }

    void displayDetails() override {
        Property::displayDetails();
        cout << "Yard Size: " << yardSize << endl;
        cout << "Garage Type: " << garageType << endl;
    }

    void updateDetails() override {
        Property::updateDetails();
        cout << "Update Yard Size: ";
        cin.ignore();
        getline(cin, yardSize);
        cout << "Update Garage Type: ";
        getline(cin, garageType);
    }
};

// Single Storey House (Grandchild Class of House)
class SingleStoreyHouse : public House {
public:
    SingleStoreyHouse() : House() {}

    void inputDetails() override {
        House::inputDetails();
        cout << "Single Storey House added successfully!" << endl;
    }

    void displayDetails() override {
        House::displayDetails();
    }

    void updateDetails() override {
        House::updateDetails();
    }
};

// Double Storey House (Grandchild Class of House)
class DoubleStoreyHouse : public House {
public:
    DoubleStoreyHouse() : House() {}

    void inputDetails() override {
        House::inputDetails();
        cout << "Double Storey House added successfully!" << endl;
    }

    void displayDetails() override {
        House::displayDetails();
    }

    void updateDetails() override {
        House::updateDetails();
    }
};

// CommercialSpace Class (Child of Property)
class CommercialSpace : public Property {
protected:
    string businessType;
    double squareFootage;

public:
    CommercialSpace() : Property() {
        businessType = "";
        squareFootage = 0.0;
    }

    void inputDetails() override {
        Property::inputDetails();
        cout << "Enter Business Type: ";
        cin.ignore();
        getline(cin, businessType);
        cout << "Enter Square Footage: ";
        cin >> squareFootage;
    }

    void displayDetails() override {
        Property::displayDetails();
        cout << "Business Type: " << businessType << endl;
        cout << "Square Footage: " << squareFootage << " sqft" << endl;
    }

    void updateDetails() override {
        Property::updateDetails();
        cout << "Update Business Type: ";
        cin.ignore();
        getline(cin, businessType);
        cout << "Update Square Footage: ";
        cin >> squareFootage;
    }
};

// Retail Store (Grandchild Class of CommercialSpace)
class RetailStore : public CommercialSpace {
public:
    RetailStore() : CommercialSpace() {}

    void inputDetails() override {
        CommercialSpace::inputDetails();
        cout << "Retail Store added successfully!" << endl;
    }

    void displayDetails() override {
        CommercialSpace::displayDetails();
    }

    void updateDetails() override {
        CommercialSpace::updateDetails();
    }
};

// Office Space (Grandchild Class of CommercialSpace)
class OfficeSpace : public CommercialSpace {
public:
    OfficeSpace() : CommercialSpace() {}

    void inputDetails() override {
        CommercialSpace::inputDetails();
        cout << "Office Space added successfully!" << endl;
    }

    void displayDetails() override {
        CommercialSpace::displayDetails();
    }

    void updateDetails() override {
        CommercialSpace::updateDetails();
    }
};

// Villa Class (Child of Property)
class Villa : public Property {
protected:
    string villaType;

public:
    Villa() : Property() {
        villaType = "";
    }

    void inputDetails() override {
        Property::inputDetails();
        cout << "Enter Villa Type (Beachfront/Mountain): ";
        cin.ignore();
        getline(cin, villaType);
    }

    void displayDetails() override {
        Property::displayDetails();
        cout << "Villa Type: " << villaType << endl;
    }

    void updateDetails() override {
        Property::updateDetails();
        cout << "Update Villa Type (Beachfront/Mountain): ";
        cin.ignore();
        getline(cin, villaType);
    }
};

// Beachfront Villa (Grandchild Class of Villa)
class BeachfrontVilla : public Villa {
public:
    BeachfrontVilla() : Villa() {}

    void inputDetails() override {
        Villa::inputDetails();
        cout << "Beachfront Villa added successfully!" << endl;
    }

    void displayDetails() override {
        Villa::displayDetails();
    }

    void updateDetails() override {
        Villa::updateDetails();
    }
};

// Mountain Villa (Grandchild Class of Villa)
class MountainVilla : public Villa {
public:
    MountainVilla() : Villa() {}

    void inputDetails() override {
        Villa::inputDetails();
        cout << "Mountain Villa added successfully!" << endl;
    }

    void displayDetails() override {
        Villa::displayDetails();
    }

    void updateDetails() override {
        Villa::updateDetails();
    }
};

// Studio Class (Child of Property)
class Studio : public Property {
protected:
    string studioType;

public:
    Studio() : Property() {
        studioType = "";
    }

    void inputDetails() override {
        Property::inputDetails();
        cout << "Enter Studio Type (Furnished/Unfurnished): ";
        cin.ignore();
        getline(cin, studioType);
    }

    void displayDetails() override {
        Property::displayDetails();
        cout << "Studio Type: " << studioType << endl;
    }

    void updateDetails() override {
        Property::updateDetails();
        cout << "Update Studio Type (Furnished/Unfurnished): ";
        cin.ignore();
        getline(cin, studioType);
    }
};

// Furnished Studio (Grandchild Class of Studio)
class FurnishedStudio : public Studio {
public:
    FurnishedStudio() : Studio() {}

    void inputDetails() override {
        Studio::inputDetails();
        cout << "Furnished Studio added successfully!" << endl;
    }

    void displayDetails() override {
        Studio::displayDetails();
    }

    void updateDetails() override {
        Studio::updateDetails();
    }
};

// Unfurnished Studio (Grandchild Class of Studio)
class UnfurnishedStudio : public Studio {
public:
    UnfurnishedStudio() : Studio() {}

    void inputDetails() override {
        Studio::inputDetails();
        cout << "Unfurnished Studio added successfully!" << endl;
    }

    void displayDetails() override {
        Studio::displayDetails();
    }

    void updateDetails() override {
        Studio::updateDetails();
    }
};

// Main Function
int main() {
    Property* properties[100];  // Array to store property objects
    int propertyCount = 0;      // Counter for the number of properties
    int choice;

    while (true) {
        cout << "\n--- Property Rental Management System ---\n";
        cout << "1. Add One-Bedroom Apartment\n";
        cout << "2. Add Two-Bedroom Apartment\n";
        cout << "3. Add Single Storey House\n";
        cout << "4. Add Double Storey House\n";
        cout << "5. Add Retail Store\n";
        cout << "6. Add Office Space\n";
        cout << "7. Add Beachfront Villa\n";
        cout << "8. Add Mountain Villa\n";
        cout << "9. Add Furnished Studio\n";
        cout << "10. Add Unfurnished Studio\n";
        cout << "11. View All Properties\n";
        cout << "12. Delete Property\n";
        cout << "13. Update Property\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            properties[propertyCount] = new OneBedroomApartment();
            properties[propertyCount]->inputDetails();
            propertyCount++;
        }
        else if (choice == 2) {
            properties[propertyCount] = new TwoBedroomApartment();
            properties[propertyCount]->inputDetails();
            propertyCount++;
        }
        else if (choice == 3) {
            properties[propertyCount] = new SingleStoreyHouse();
            properties[propertyCount]->inputDetails();
            propertyCount++;
        }
        else if (choice == 4) {
            properties[propertyCount] = new DoubleStoreyHouse();
            properties[propertyCount]->inputDetails();
            propertyCount++;
        }
        else if (choice == 5) {
            properties[propertyCount] = new RetailStore();
            properties[propertyCount]->inputDetails();
            propertyCount++;
        }
        else if (choice == 6) {
            properties[propertyCount] = new OfficeSpace();
            properties[propertyCount]->inputDetails();
            propertyCount++;
        }
        else if (choice == 7) {
            properties[propertyCount] = new BeachfrontVilla();
            properties[propertyCount]->inputDetails();
            propertyCount++;
        }
        else if (choice == 8) {
            properties[propertyCount] = new MountainVilla();
            properties[propertyCount]->inputDetails();
            propertyCount++;
        }
        else if (choice == 9) {
            properties[propertyCount] = new FurnishedStudio();
            properties[propertyCount]->inputDetails();
            propertyCount++;
        }
        else if (choice == 10) {
            properties[propertyCount] = new UnfurnishedStudio();
            properties[propertyCount]->inputDetails();
            propertyCount++;
        }
        else if (choice == 11) {
            if (propertyCount == 0) {
                cout << "No properties available." << endl;
            } else {
                for (int i = 0; i < propertyCount; i++) {
                    cout << "\nProperty #" << (i + 1) << " details:\n";
                    properties[i]->displayDetails();
                }
            }
        }
        else if (choice == 12) {
            string idToDelete;
            cout << "Enter Property ID to delete: ";
            cin >> idToDelete;

            bool found = false;
            for (int i = 0; i < propertyCount; i++) {
                if (properties[i]->getPropertyID() == idToDelete) {
                    delete properties[i];
                    // Shift remaining properties
                    for (int j = i; j < propertyCount - 1; j++) {
                        properties[j] = properties[j + 1];
                    }
                    propertyCount--;
                    found = true;
                    cout << "Property with ID " << idToDelete << " deleted successfully!" << endl;
                    break;
                }
            }
            if (!found) {
                cout << "Property with ID " << idToDelete << " not found!" << endl;
            }
        }
        else if (choice == 13) {
            string idToUpdate;
            cout << "Enter Property ID to update: ";
            cin >> idToUpdate;

            bool found = false;
            for (int i = 0; i < propertyCount; i++) {
                if (properties[i]->getPropertyID() == idToUpdate) {
                    properties[i]->updateDetails();
                    found = true;
                    cout << "Property with ID " << idToUpdate << " updated successfully!" << endl;
                    break;
                }
            }
            if (!found) {
                cout << "Property with ID " << idToUpdate << " not found!" << endl;
            }
        }
        else if (choice == 0) {
            cout << "Exiting program. Goodbye!" << endl;
            // Delete all properties before exiting
            for (int i = 0; i < propertyCount; i++) {
                delete properties[i];
            }
            break;
        }
        else {
            cout << "Invalid choice! Try again." << endl;
        }
    }

    return 0;
}

