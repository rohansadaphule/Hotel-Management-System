#include <iostream>

int main()
{
    int quant;
    int choice;
    // Quantity of items
    int Qrooms = 0, Qpasta = 0, Qsalad = 0, Qdessert = 0;
    // items sold
    int Srooms = 0, Spasta = 0, Ssalad = 0, Sdessert = 0;
    // Total price of items
    int Total_rooms = 0, Total_pasta = 0, Total_salad = 0, Total_dessert = 0;

    std::cout << "\n\t Quantity of items we have" << std::endl;
    std::cout << "\n Rooms available" << std::endl;
    std::cin >> Qrooms;
    std::cout << "\n Quantity of Pasta" << std::endl;
    std::cin >> Qpasta;
    std::cout << "\n Quantity of Salad" << std::endl;
    std::cin >> Qsalad;
    std::cout << "\n Quantity of Dessert" << std::endl;
    std::cin >> Qdessert;

m:
    std::cout << "\n\t\t Please select from the menu options";
    std::cout << "\n\n1. Rooms";
    std::cout << "\n2. Pasta";
    std::cout << "\n3. Salad";
    std::cout << "\n4. Dessert";
    std::cout << "\n5. Information regarding sales and collection";
    std::cout << "\n6. Exit";

    std::cout << "\n\n Please enter your choice: " << std::endl;
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        std::cout << "\n Enter the quantity of rooms you want to buy: " << std::endl;
        std::cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms += quant;
            Total_rooms += quant * 1000;
            std::cout << "\n\n\t\t" << quant << " rooms have been alloted to you" << std::endl;
        }
        else
        {
            std::cout << "\n\tOnly " << Qrooms - Srooms << "Rooms remaining in Hotel" << std::endl;
            break;
        }
    case 2:
        std::cout << "\n Enter the quantity of pasta you want to buy: " << std::endl;
        std::cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta += quant;
            Total_pasta += quant * 200;
            std::cout << "\n\n\t\t" << quant << " pasta is the order" << std::endl;
        }
        else
        {
            std::cout << "\n\tOnly " << Qpasta - Spasta << "Pasta remaining in Hotel" << std::endl;
            break;
        }

    case 3:
        std::cout << "\n Enter the quantity of salad you want to buy: " << std::endl;
        std::cin >> quant;
        if (Qsalad - Ssalad >= quant)
        {
            Ssalad += quant;
            Total_salad += quant * 100;
            std::cout << "\n\n\t\t" << quant << " salad is the order" << std::endl;
        }
        else
        {
            std::cout << "\n\tOnly " << Qsalad - Ssalad << "Salad remaining in Hotel" << std::endl;
            break;
        }

    case 4:
        std::cout << "\n Enter the quantity of dessert you want to buy: " << std::endl;
        std::cin >> quant;
        if (Qdessert - Sdessert >= quant)
        {
            Sdessert += quant;
            Total_dessert += quant * 150;
            std::cout << "\n\n\t\t" << quant << " dessert is the order" << std::endl;
        }
        else
        {
            std::cout << "\n\tOnly " << Qdessert - Sdessert << "Dessert remaining in Hotel" << std::endl;
            break;
        }
    case 5:
        std::cout << "\n\t\tDetails of sales and collection" << std::endl;
        std::cout << "\n\nNumber of Rooms we had: " << Qrooms << std::endl;
        std::cout << "\n\nNumber of Rooms we sold: " << Srooms << std::endl;
        std::cout << "\n\nNumber of Rooms we have: " << Qrooms - Srooms << std::endl;
        std::cout << "\n\nTotal rooms collection for the day: " << Total_rooms << std::endl;
        std::cout << "\n\nNumber of Pasta we had: " << Qpasta << std::endl;
        std::cout << "\n\nNumber of Pasta we sold: " << Spasta << std::endl;
        std::cout << "\n\nNumber of Pasta we have: " << Qpasta - Spasta << std::endl;
        std::cout << "\n\nTotal pasta collection for the day: " << Total_pasta << std::endl;
        std::cout << "\n\nNumber of Salad we had: " << Qsalad << std::endl;
        std::cout << "\n\nNumber of Salad we sold: " << Ssalad << std::endl;
        std::cout << "\n\nNumber of Salad we have: " << Qsalad - Ssalad << std::endl;
        std::cout << "\n\nTotal salad collection for the day: " << Total_salad << std::endl;
        std::cout << "\n\nNumber of Dessert we had: " << Qdessert << std::endl;
        std::cout << "\n\nNumber of Dessert we sold: " << Sdessert << std::endl;
        std::cout << "\n\nNumber of Dessert we have: " << Qdessert - Sdessert << std::endl;
        std::cout << "\n\nTotal dessert collection for the day: " << Total_dessert << std::endl;
        break;

    case 6:
        std::cout << "\n\t\tThank you for visiting our Hotel" << std::endl;
        exit(0);

    default:
        std::cout
            << "\n\t\tInvalid choice"
            << std::endl;
    }
    goto m;
}
