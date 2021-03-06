#ifndef RAYCUBE_H_
#define RAYCUBE_H_

extern float shadowray(const vec &o, const vec &ray, float radius, int mode, extentity *t = NULL);
extern float raycube   (const vec &o, const vec &ray,     float radius = 0, int mode = Ray_ClipMat, int size = 0, extentity *t = 0);
extern float raycubepos(const vec &o, const vec &ray, vec &hit, float radius = 0, int mode = Ray_ClipMat, int size = 0);
extern float rayfloor  (const vec &o, vec &floor, int mode = 0, float radius = 0);
extern bool  raycubelos(const vec &o, const vec &dest, vec &hitpos);

extern bool insideworld(const vec &o);
extern bool insideworld(const ivec &o);

#endif
