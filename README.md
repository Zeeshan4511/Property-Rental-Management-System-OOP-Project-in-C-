# Property-Rental-Management-System-OOP-Project-in-C-
A C++ console-based OOP Property Rental Management System to manage apartments, houses, villas, studios, and commercial spaces using inheritance, polymorphism, and dynamic memory allocation.
Project Overview:
This is a console-based Property Rental Management System developed using Object-Oriented Programming (OOP) concepts in C++. The system allows users to add, view, update, and delete different types of rental properties such as apartments, houses, villas, studios, and commercial spaces.
This project is ideal for beginners and students looking to implement real-world applications of inheritance, polymorphism, and encapsulation in C++.
Key Features:
- Add One-Bedroom and Two-Bedroom Apartments
- Manage Single and Double Storey Houses
- Add Commercial Properties such as Retail Stores and Office Spaces
- Support for Villas (Beachfront and Mountain) and Studios (Furnished/Unfurnished)
- Each property has a unique Property ID for easy search and updates
- View all property listings
- Update or delete a property by entering its Property ID
- Uses dynamic memory allocation and base class pointers
- Implements runtime polymorphism via virtual functions
OOP Concepts Implemented:
- Inheritance (Parent and Child class relationships)
- Polymorphism (Virtual functions for dynamic dispatch)
- Encapsulation (Protected data members and methods)
- Dynamic Binding (Using base class pointers to call derived class methods)

Class Hierarchy:
- Base Class: Property
  - Apartment
    - OneBedroomApartment
    - TwoBedroomApartment
  - House
    - SingleStoreyHouse
    - DoubleStoreyHouse
  - CommercialSpace
    - RetailStore
    - OfficeSpace
  - Villa
    - BeachfrontVilla
    - MountainVilla
  - Studio
    - FurnishedStudio
    - UnfurnishedStudio

How to Run:
1. Compile the program using a C++ compiler:
   g++ main.cpp -o PropertyRentalSystem

2. Run the executable:
   ./PropertyRentalSystem


Developed By:
M.Zeeshan  
GitHub: https://github.com/Zeeshan4511
