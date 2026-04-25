#include <iostream>
#include <cmath>

struct Vec3{
    double x,y,z;

    Vec3 operator+(const Vec3& other) const{
        return {x + other.x, y + other.y, z + other.z};
    }

    Vec3 operator-(const Vec3& other) const{
        return {x - other.x, y + other.y, z + other.z};
    }

    Vec3 operator*(double scalar) const{
        return {x * scalar, y * scalar, z * scalar};
    }

    double norm(const Vec3& vector){
        return std::sqrt(vector.x*vector.x + vector.y*vector.y + vector.z*vector.z);
    }
};