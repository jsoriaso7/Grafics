#ifndef MATERIAL_H
#define MATERIAL_H

#include <Common.h>

// Classe que representa les propietats optiques d'un objecte
class Material {

protected:

    int refEspecular;
    //float opacidad; // En teoria no lo usaremos
    vec3 Kd;
    vec3 Ka;
    vec3 Ks;
    struct{
        GLuint kdId;
        GLuint ksId;
        GLuint kaId;

        GLuint shininessId;
    }gl_IdMaterialInfo;

public:
    Material();

    virtual void toGPU(QGLShaderProgram *program);

};

#endif // MATERIAL_H
