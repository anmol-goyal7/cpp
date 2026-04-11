#include<iostream>

class Entity 
{
    public:
        float X, Y;

        Entity()
        {
            X = 0.0f;
            Y = 0.0f;
            std::cout << "Created Entity!\n";
        }

        Entity(float x, float y)
        {
            X = x;
            Y = y;
        }

        ~Entity()
        {
            std::cout << "\nDestroyed Entity!\n";
        }

        void Print()
        {
            std::cout << X << ", " << Y;
        }
};

void Function()
{
    Entity e;
    e.Print();
}

int main()
{
    Function();
    std::cin.get();
}
  

    
