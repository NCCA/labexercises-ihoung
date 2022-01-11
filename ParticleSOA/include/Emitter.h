#ifndef EMITTER_H_
#define EMITTER_H_  

#include <vector>
#include "Particle.h"
#include <ngl/Vec3.h>
#include <ngl/SimpleVAO.h>
#include <memory>

class Emitter
{
public:
    Emitter()=default;
    Emitter(size_t _numParticles, const ngl::Vec3 &_emitdir);
    void update();
    void render() const;
    size_t numParticles() const;
    void saveFrame(int _frameNo) const;

private:
    void resetParticle(size_t _index);
    // std::vector<Particle> m_particles;
    int m_numParticles;
    std::vector<ngl::Vec4> m_posSize;
    std::vector<ngl::Vec3> m_dir;
    std::vector<ngl::Vec3> m_color;
    // std::vector<float> m_size;
    std::vector<int> m_life;
    std::vector<int> m_maxLife;

    ngl::Vec3 m_emitDir={0.0f, 5.0f, 0.0f};
    float m_spread = 1.5f;
    std::unique_ptr<ngl::AbstractVAO> m_vao;
};

#endif