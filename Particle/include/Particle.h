#ifndef PARTICLE_H_
#define PARTICLE_H_

#include <iostream>
#include <Vec3.h>

struct Particle
{
    Particle()=default;
    Particle(const Particle&)=default;
    Particle(const Vec3& _pos, const Vec3& _dir, const Vec3& _color, int _life, float _size):
    pos{_pos},
    dir{_dir},
    color{_color},
    life{_life},
    size{_size}{}
    Vec3 pos;
    Vec3 dir;
    Vec3 color;
    int life=0;
    int maxLife=10;
    float size=1.0f;
};

#endif