#include "material.h"

Material::Material() {


    // Valores del material esmeralda
    refEspecular = 0.6;
    Ka = vec3(0.0215, 0.1745, 0.0215);
    Kd = vec3(0.07568, 0.61424, 0.07568);
    Ks = vec3(0.633, 0.727811, 0.633);


}


void Material::toGPU(QGLShaderProgram *program) {

    gl_IdMaterialInfo.kaId = program->uniformLocation("matInfo.ka");
    gl_IdMaterialInfo.ksId = program->uniformLocation("matInfo.ks");
    gl_IdMaterialInfo.kdId = program->uniformLocation("matInfo.kd");
    gl_IdMaterialInfo.shininessId = program->uniformLocation("matInfo.shininess");


    glUniform3fv(gl_IdMaterialInfo.kaId, 1, Ka);
    glUniform3fv(gl_IdMaterialInfo.ksId, 1, Ks);
    glUniform3fv(gl_IdMaterialInfo.kdId, 1, Kd);

    glUniform1f(gl_IdMaterialInfo.shininessId, 1, refEspecular);

}
