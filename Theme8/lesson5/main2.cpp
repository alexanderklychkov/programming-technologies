#include <iostream>

struct Vector3D
{
    int x = 0;
    int y = 0;
    int z = 0;

    Vector3D operator + (const Vector3D& other)
    {
        x += other.x;
        y += other.y;
        z += other.z;
        return *this;
    }
};


int main()
{
    Vector3D vec1{3, 5, 6};
    Vector3D vec2{6, 5, 3};
    vec2 = vec1 + vec2;

    Vector3D result;

    return 0;
}