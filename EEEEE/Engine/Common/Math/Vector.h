//
//  Vector.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef Vector_h
#define Vector_h

#include "Engine/Common/Engine.h"

struct Vector
{
public:
    float x;
    float y;
    float z;
    
public:
    // (0, 0, 0)
    static const Vector ZeroVector;
    
    // (1, 1, 1)
    static const Vector OneVector;
    
    // (0, 1, 0)
    static const Vector UpVector;
    
    // (0, 0, 1)
    static const Vector ForwardVector;
    
    // (1, 0, 0)
    static const Vector RightVector;
    
public:
    // constructor
    FORCEINLINE Vector()
    {
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
    }
    
    FORCEINLINE Vector(const float _val)
    {
        x = _val;
        y = _val;
        z = _val;
    }
    
    FORCEINLINE Vector(const float _x, const float _y, const float _z)
    {
        x = _x;
        y = _y;
        z = _z;
    }
    
    // operator
    FORCEINLINE Vector operator-() const
    {
        return Vector(-x, -y, -z);
    }
    
    FORCEINLINE Vector operator+(const Vector& rhs) const
    {
        return Vector(x + rhs.x, y + rhs.y, z + rhs.z);
    }
    
    FORCEINLINE Vector operator-(const Vector& rhs) const
    {
        return Vector(x - rhs.x, y - rhs.y, z - rhs.z);
    }
    
    FORCEINLINE Vector operator*(const float& rhs) const
    {
        return Vector(x * rhs, y * rhs, z * rhs);
    }
    
    FORCEINLINE Vector operator/(const float& rhs) const
    {
        return Vector(x / rhs, y / rhs, z / rhs);
    }
    
    FORCEINLINE Vector DotProduct(const Vector& rhs) const
    {
        return Vector(x * rhs.x, y * rhs.y, z * rhs.z);
    }
    
    FORCEINLINE Vector CrossProduct(const Vector& rhs) const
    {
        return Vector((y * rhs.z - z * rhs.y), (z * rhs.x - x * rhs.z), (x * rhs.y - y * rhs.x));
    }
    
    FORCEINLINE float Size() const
    {
        return sqrt(x * x + y * y + z * z);
    }

    FORCEINLINE void Normalize()
    {
        (*this) = (*this) / Size();
    }
};

#endif /* Vector_hpp */
