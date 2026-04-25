using namespace std;

#include <iostream>
#include <cmath>
#include <vector>

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
        return sqrt(vector.x*vector.x + vector.y*vector.y + vector.z*vector.z);
    }
};

struct Body{
    Vec3 position;
    Vec3 velocity;
    double mass;
};

vector<Vec3> compute_accelerations(const vector<Body>& bodies, double G){
    
}