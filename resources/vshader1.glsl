#if __VERSION__<130
#define IN attribute
#define OUT varying
#else
#define IN in
#define OUT out
#endif


IN vec4 vPosition;
IN vec4 vColor;

OUT vec4 color;


struct materialInfo
{
    vec3 ka;
    vec3 kd;
    vec3 ks;
    float shininess;
};

uniform materialInfo matInfo;



void main()
{
  gl_Position = vPosition;
  color = vColor;
  // Kd sera el parametro que nos llega
  // color = vec4(Kd[0], Kd[1], Kd[2], 1.0);
  // Comprobar que toda la informacion esta bien pasada, usando este truco digamos ( definir un color con estos parametros y comprobar que es lo que queremos).
  // Comprobar aqui que los colores de los materiales estan bien pasados, pudiendo mirarlo aqui (aqui estamos en GPU)
}
