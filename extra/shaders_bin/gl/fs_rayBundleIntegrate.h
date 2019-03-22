static const uint8_t fs_rayBundleIntegrate_gl[4979] =
{
	0x46, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x13, // FSH...........`.
	0x00, 0x00, 0x23, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x34, 0x33, 0x30, 0x0a, 0x23, // ..#version 430.#
	0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, // define texture2D
	0x4c, 0x6f, 0x64, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // Lod      texture
	0x4c, 0x6f, 0x64, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x74, 0x65, 0x78, 0x74, // Lod.#define text
	0x75, 0x72, 0x65, 0x32, 0x44, 0x47, 0x72, 0x61, 0x64, 0x20, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, // ure2DGrad     te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x47, 0x72, 0x61, 0x64, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, // xtureGrad.#defin
	0x65, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x50, 0x72, 0x6f, 0x6a, 0x4c, // e texture2DProjL
	0x6f, 0x64, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x50, 0x72, 0x6f, 0x6a, 0x4c, // od  textureProjL
	0x6f, 0x64, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, // od.#define textu
	0x72, 0x65, 0x32, 0x44, 0x50, 0x72, 0x6f, 0x6a, 0x47, 0x72, 0x61, 0x64, 0x20, 0x74, 0x65, 0x78, // re2DProjGrad tex
	0x74, 0x75, 0x72, 0x65, 0x50, 0x72, 0x6f, 0x6a, 0x47, 0x72, 0x61, 0x64, 0x0a, 0x23, 0x64, 0x65, // tureProjGrad.#de
	0x66, 0x69, 0x6e, 0x65, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x43, 0x75, 0x62, 0x65, // fine textureCube
	0x4c, 0x6f, 0x64, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x4c, 0x6f, // Lod    textureLo
	0x64, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // d.#define textur
	0x65, 0x43, 0x75, 0x62, 0x65, 0x47, 0x72, 0x61, 0x64, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, // eCubeGrad   text
	0x75, 0x72, 0x65, 0x47, 0x72, 0x61, 0x64, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, // ureGrad.#define 
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x33, 0x44, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // texture3D       
	0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, //   texture.#defin
	0x65, 0x20, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x69, 0x6e, 0x0a, 0x23, // e attribute in.#
	0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x69, // define varying i
	0x6e, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x62, 0x67, 0x66, 0x78, 0x53, 0x68, // n.#define bgfxSh
	0x61, 0x64, 0x6f, 0x77, 0x32, 0x44, 0x28, 0x5f, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, // adow2D(_sampler,
	0x20, 0x5f, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x29, 0x20, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, //  _coord)     vec
	0x34, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, // 4_splat(texture(
	0x5f, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x5f, 0x63, 0x6f, 0x6f, 0x72, 0x64, // _sampler, _coord
	0x29, 0x29, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x62, 0x67, 0x66, 0x78, 0x53, // )).#define bgfxS
	0x68, 0x61, 0x64, 0x6f, 0x77, 0x32, 0x44, 0x50, 0x72, 0x6f, 0x6a, 0x28, 0x5f, 0x73, 0x61, 0x6d, // hadow2DProj(_sam
	0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x5f, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x29, 0x20, 0x76, 0x65, // pler, _coord) ve
	0x63, 0x34, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // c4_splat(texture
	0x50, 0x72, 0x6f, 0x6a, 0x28, 0x5f, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x5f, // Proj(_sampler, _
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x29, 0x29, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, 0x69, 0x6e, 0x73, // coord)).vec3 ins
	0x74, 0x4d, 0x75, 0x6c, 0x28, 0x76, 0x65, 0x63, 0x33, 0x20, 0x5f, 0x76, 0x65, 0x63, 0x2c, 0x20, // tMul(vec3 _vec, 
	0x6d, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x6d, 0x74, 0x78, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, // mat3 _mtx) { ret
	0x75, 0x72, 0x6e, 0x20, 0x28, 0x20, 0x28, 0x5f, 0x76, 0x65, 0x63, 0x29, 0x20, 0x2a, 0x20, 0x28, // urn ( (_vec) * (
	0x5f, 0x6d, 0x74, 0x78, 0x29, 0x20, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, // _mtx) ); }.vec3 
	0x69, 0x6e, 0x73, 0x74, 0x4d, 0x75, 0x6c, 0x28, 0x6d, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x6d, 0x74, // instMul(mat3 _mt
	0x78, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x5f, 0x76, 0x65, 0x63, 0x29, 0x20, 0x7b, 0x20, // x, vec3 _vec) { 
	0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x28, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x78, 0x29, 0x20, // return ( (_mtx) 
	0x2a, 0x20, 0x28, 0x5f, 0x76, 0x65, 0x63, 0x29, 0x20, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, // * (_vec) ); }.ve
	0x63, 0x34, 0x20, 0x69, 0x6e, 0x73, 0x74, 0x4d, 0x75, 0x6c, 0x28, 0x76, 0x65, 0x63, 0x34, 0x20, // c4 instMul(vec4 
	0x5f, 0x76, 0x65, 0x63, 0x2c, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x6d, 0x74, 0x78, 0x29, // _vec, mat4 _mtx)
	0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x28, 0x20, 0x28, 0x5f, 0x76, 0x65, //  { return ( (_ve
	0x63, 0x29, 0x20, 0x2a, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x78, 0x29, 0x20, 0x29, 0x3b, 0x20, 0x7d, // c) * (_mtx) ); }
	0x0a, 0x76, 0x65, 0x63, 0x34, 0x20, 0x69, 0x6e, 0x73, 0x74, 0x4d, 0x75, 0x6c, 0x28, 0x6d, 0x61, // .vec4 instMul(ma
	0x74, 0x34, 0x20, 0x5f, 0x6d, 0x74, 0x78, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x76, // t4 _mtx, vec4 _v
	0x65, 0x63, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x28, 0x20, 0x28, // ec) { return ( (
	0x5f, 0x6d, 0x74, 0x78, 0x29, 0x20, 0x2a, 0x20, 0x28, 0x5f, 0x76, 0x65, 0x63, 0x29, 0x20, 0x29, // _mtx) * (_vec) )
	0x3b, 0x20, 0x7d, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x72, 0x63, 0x70, 0x28, 0x66, 0x6c, // ; }.float rcp(fl
	0x6f, 0x61, 0x74, 0x20, 0x5f, 0x61, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, // oat _a) { return
	0x20, 0x31, 0x2e, 0x30, 0x2f, 0x5f, 0x61, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x32, 0x20, //  1.0/_a; }.vec2 
	0x72, 0x63, 0x70, 0x28, 0x76, 0x65, 0x63, 0x32, 0x20, 0x5f, 0x61, 0x29, 0x20, 0x7b, 0x20, 0x72, // rcp(vec2 _a) { r
	0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x31, 0x2e, 0x30, 0x29, 0x2f, // eturn vec2(1.0)/
	0x5f, 0x61, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, 0x72, 0x63, 0x70, 0x28, 0x76, // _a; }.vec3 rcp(v
	0x65, 0x63, 0x33, 0x20, 0x5f, 0x61, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, // ec3 _a) { return
	0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x31, 0x2e, 0x30, 0x29, 0x2f, 0x5f, 0x61, 0x3b, 0x20, 0x7d, //  vec3(1.0)/_a; }
	0x0a, 0x76, 0x65, 0x63, 0x34, 0x20, 0x72, 0x63, 0x70, 0x28, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, // .vec4 rcp(vec4 _
	0x61, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x34, // a) { return vec4
	0x28, 0x31, 0x2e, 0x30, 0x29, 0x2f, 0x5f, 0x61, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x32, // (1.0)/_a; }.vec2
	0x20, 0x76, 0x65, 0x63, 0x32, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x66, 0x6c, 0x6f, 0x61, //  vec2_splat(floa
	0x74, 0x20, 0x5f, 0x78, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x76, // t _x) { return v
	0x65, 0x63, 0x32, 0x28, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x76, // ec2(_x, _x); }.v
	0x65, 0x63, 0x33, 0x20, 0x76, 0x65, 0x63, 0x33, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x66, // ec3 vec3_splat(f
	0x6c, 0x6f, 0x61, 0x74, 0x20, 0x5f, 0x78, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, // loat _x) { retur
	0x6e, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x2c, 0x20, 0x5f, // n vec3(_x, _x, _
	0x78, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x65, 0x63, 0x34, 0x5f, // x); }.vec4 vec4_
	0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x5f, 0x78, 0x29, 0x20, // splat(float _x) 
	0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x5f, 0x78, // { return vec4(_x
	0x2c, 0x20, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x29, 0x3b, 0x20, 0x7d, // , _x, _x, _x); }
	0x0a, 0x75, 0x76, 0x65, 0x63, 0x32, 0x20, 0x75, 0x76, 0x65, 0x63, 0x32, 0x5f, 0x73, 0x70, 0x6c, // .uvec2 uvec2_spl
	0x61, 0x74, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x5f, 0x78, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, // at(uint _x) { re
	0x74, 0x75, 0x72, 0x6e, 0x20, 0x75, 0x76, 0x65, 0x63, 0x32, 0x28, 0x5f, 0x78, 0x2c, 0x20, 0x5f, // turn uvec2(_x, _
	0x78, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x75, 0x76, 0x65, 0x63, 0x33, 0x20, 0x75, 0x76, 0x65, 0x63, // x); }.uvec3 uvec
	0x33, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x5f, 0x78, 0x29, // 3_splat(uint _x)
	0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x75, 0x76, 0x65, 0x63, 0x33, 0x28, //  { return uvec3(
	0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x75, // _x, _x, _x); }.u
	0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x76, 0x65, 0x63, 0x34, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, // vec4 uvec4_splat
	0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x5f, 0x78, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, // (uint _x) { retu
	0x72, 0x6e, 0x20, 0x75, 0x76, 0x65, 0x63, 0x34, 0x28, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x2c, // rn uvec4(_x, _x,
	0x20, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x6d, 0x61, 0x74, 0x34, //  _x, _x); }.mat4
	0x20, 0x6d, 0x74, 0x78, 0x46, 0x72, 0x6f, 0x6d, 0x52, 0x6f, 0x77, 0x73, 0x28, 0x76, 0x65, 0x63, //  mtxFromRows(vec
	0x34, 0x20, 0x5f, 0x30, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x31, 0x2c, 0x20, 0x76, // 4 _0, vec4 _1, v
	0x65, 0x63, 0x34, 0x20, 0x5f, 0x32, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x33, 0x29, // ec4 _2, vec4 _3)
	0x0a, 0x7b, 0x0a, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x70, // .{.return transp
	0x6f, 0x73, 0x65, 0x28, 0x6d, 0x61, 0x74, 0x34, 0x28, 0x5f, 0x30, 0x2c, 0x20, 0x5f, 0x31, 0x2c, // ose(mat4(_0, _1,
	0x20, 0x5f, 0x32, 0x2c, 0x20, 0x5f, 0x33, 0x29, 0x20, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x6d, 0x61, //  _2, _3) );.}.ma
	0x74, 0x34, 0x20, 0x6d, 0x74, 0x78, 0x46, 0x72, 0x6f, 0x6d, 0x43, 0x6f, 0x6c, 0x73, 0x28, 0x76, // t4 mtxFromCols(v
	0x65, 0x63, 0x34, 0x20, 0x5f, 0x30, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x31, 0x2c, // ec4 _0, vec4 _1,
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x32, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, //  vec4 _2, vec4 _
	0x33, 0x29, 0x0a, 0x7b, 0x0a, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6d, 0x61, 0x74, 0x34, // 3).{.return mat4
	0x28, 0x5f, 0x30, 0x2c, 0x20, 0x5f, 0x31, 0x2c, 0x20, 0x5f, 0x32, 0x2c, 0x20, 0x5f, 0x33, 0x29, // (_0, _1, _2, _3)
	0x3b, 0x0a, 0x7d, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, // ;.}.uniform vec4
	0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x3b, 0x0a, 0x75, 0x6e, 0x69, //  u_viewRect;.uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, // form vec4 u_view
	0x54, 0x65, 0x78, 0x65, 0x6c, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, // Texel;.uniform m
	0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, // at4 u_view;.unif
	0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, // orm mat4 u_invVi
	0x65, 0x77, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, // ew;.uniform mat4
	0x20, 0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, //  u_proj;.uniform
	0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x3b, //  mat4 u_invProj;
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, // .uniform mat4 u_
	0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // viewProj;.unifor
	0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, // m mat4 u_invView
	0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, // Proj;.uniform ma
	0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x33, 0x32, 0x5d, 0x3b, 0x0a, // t4 u_model[32];.
	0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, // uniform mat4 u_m
	0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // odelView;.unifor
	0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, // m mat4 u_modelVi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, // ewProj;.uniform 
	0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, // vec4 u_alphaRef4
	0x3b, 0x0a, 0x6c, 0x61, 0x79, 0x6f, 0x75, 0x74, 0x28, 0x72, 0x33, 0x32, 0x75, 0x69, 0x2c, 0x20, // ;.layout(r32ui, 
	0x62, 0x69, 0x6e, 0x64, 0x69, 0x6e, 0x67, 0x3d, 0x35, 0x29, 0x20, 0x75, 0x6e, 0x69, 0x66, 0x6f, // binding=5) unifo
	0x72, 0x6d, 0x20, 0x75, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x72, 0x61, // rm uimage2D u_ra
	0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x48, 0x65, 0x61, 0x64, 0x65, 0x72, 0x53, 0x61, 0x6d, // yBundleHeaderSam
	0x70, 0x6c, 0x65, 0x72, 0x3b, 0x0a, 0x6c, 0x61, 0x79, 0x6f, 0x75, 0x74, 0x28, 0x72, 0x67, 0x62, // pler;.layout(rgb
	0x61, 0x33, 0x32, 0x75, 0x69, 0x2c, 0x20, 0x62, 0x69, 0x6e, 0x64, 0x69, 0x6e, 0x67, 0x3d, 0x36, // a32ui, binding=6
	0x29, 0x20, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x75, 0x69, 0x6d, 0x61, 0x67, 0x65, // ) uniform uimage
	0x32, 0x44, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, // 2D u_rayBundleDa
	0x74, 0x61, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x3b, 0x0a, 0x6c, 0x61, 0x79, 0x6f, 0x75, // taSampler;.layou
	0x74, 0x28, 0x72, 0x33, 0x32, 0x75, 0x69, 0x2c, 0x20, 0x62, 0x69, 0x6e, 0x64, 0x69, 0x6e, 0x67, // t(r32ui, binding
	0x3d, 0x37, 0x29, 0x20, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x75, 0x69, 0x6d, 0x61, // =7) uniform uima
	0x67, 0x65, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, // ge2D u_rayBundle
	0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x3b, // LightmapSampler;
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, // .uniform vec4 u_
	0x6c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x69, 0x7a, 0x65, 0x5f, 0x64, 0x61, 0x74, // lightmapSize_dat
	0x61, 0x53, 0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, // aSize;.uniform v
	0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, // ec4 u_rayNormal;
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, // .uniform vec4 u_
	0x73, 0x6b, 0x79, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x65, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, // skyColor_enabled
	0x3b, 0x0a, 0x69, 0x76, 0x65, 0x63, 0x32, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, // ;.ivec2 rayBundl
	0x65, 0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x6f, 0x66, 0x66, // eDataUv(uint off
	0x73, 0x65, 0x74, 0x2c, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x70, 0x69, 0x78, 0x65, 0x6c, 0x29, // set, uint pixel)
	0x0a, 0x7b, 0x0a, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x69, 0x76, 0x65, 0x63, 0x32, 0x28, // .{.return ivec2(
	0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, 0x2a, 0x20, 0x33, 0x75, 0x20, 0x2b, 0x20, 0x70, // (offset * 3u + p
	0x69, 0x78, 0x65, 0x6c, 0x29, 0x20, 0x25, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x75, 0x5f, 0x6c, // ixel) % uint(u_l
	0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x69, 0x7a, 0x65, 0x5f, 0x64, 0x61, 0x74, 0x61, // ightmapSize_data
	0x53, 0x69, 0x7a, 0x65, 0x2e, 0x7a, 0x29, 0x2c, 0x20, 0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, // Size.z), (offset
	0x20, 0x2a, 0x20, 0x33, 0x75, 0x20, 0x2b, 0x20, 0x70, 0x69, 0x78, 0x65, 0x6c, 0x29, 0x20, 0x2f, //  * 3u + pixel) /
	0x20, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, //  uint(u_lightmap
	0x53, 0x69, 0x7a, 0x65, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x53, 0x69, 0x7a, 0x65, 0x2e, 0x7a, 0x29, // Size_dataSize.z)
	0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x69, 0x76, 0x65, 0x63, 0x32, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, // );.}.ivec2 rayBu
	0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x44, 0x61, 0x74, 0x61, // ndleLightmapData
	0x55, 0x76, 0x28, 0x76, 0x65, 0x63, 0x32, 0x20, 0x75, 0x76, 0x2c, 0x20, 0x75, 0x69, 0x6e, 0x74, // Uv(vec2 uv, uint
	0x20, 0x70, 0x69, 0x78, 0x65, 0x6c, 0x29, 0x0a, 0x7b, 0x0a, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, //  pixel).{.return
	0x20, 0x69, 0x76, 0x65, 0x63, 0x32, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x75, 0x76, 0x2e, 0x78, //  ivec2(uint(uv.x
	0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x69, 0x7a, //  * u_lightmapSiz
	0x65, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x53, 0x69, 0x7a, 0x65, 0x2e, 0x78, 0x79, 0x2e, 0x78, 0x29, // e_dataSize.xy.x)
	0x20, 0x2a, 0x20, 0x34, 0x75, 0x20, 0x2b, 0x20, 0x70, 0x69, 0x78, 0x65, 0x6c, 0x2c, 0x20, 0x75, //  * 4u + pixel, u
	0x69, 0x6e, 0x74, 0x28, 0x75, 0x76, 0x2e, 0x79, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, // int(uv.y * u_lig
	0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x69, 0x7a, 0x65, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x53, 0x69, // htmapSize_dataSi
	0x7a, 0x65, 0x2e, 0x78, 0x79, 0x2e, 0x79, 0x29, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x76, 0x6f, 0x69, // ze.xy.y));.}.voi
	0x64, 0x20, 0x73, 0x65, 0x74, 0x4c, 0x75, 0x78, 0x65, 0x6c, 0x28, 0x76, 0x65, 0x63, 0x32, 0x20, // d setLuxel(vec2 
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x63, // texCoord, vec3 c
	0x6f, 0x6c, 0x6f, 0x72, 0x29, 0x20, 0x7b, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x74, 0x65, 0x78, 0x43, // olor) {.if (texC
	0x6f, 0x6f, 0x72, 0x64, 0x2e, 0x78, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x20, 0x26, 0x26, 0x20, // oord.x > 0.0 && 
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x2e, 0x79, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, // texCoord.y > 0.0
	0x29, 0x20, 0x7b, 0x0a, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x41, 0x74, 0x6f, 0x6d, 0x69, 0x63, 0x41, // ) {.imageAtomicA
	0x64, 0x64, 0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, // dd(u_rayBundleLi
	0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, // ghtmapSampler, r
	0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, // ayBundleLightmap
	0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x2c, // DataUv(texCoord,
	0x20, 0x30, 0x75, 0x29, 0x2c, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, //  0u), uint(color
	0x2e, 0x72, 0x20, 0x2a, 0x20, 0x32, 0x35, 0x35, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x69, 0x6d, // .r * 255.0));.im
	0x61, 0x67, 0x65, 0x41, 0x74, 0x6f, 0x6d, 0x69, 0x63, 0x41, 0x64, 0x64, 0x28, 0x75, 0x5f, 0x72, // ageAtomicAdd(u_r
	0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, // ayBundleLightmap
	0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, // Sampler, rayBund
	0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x44, 0x61, 0x74, 0x61, 0x55, 0x76, // leLightmapDataUv
	0x28, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x2c, 0x20, 0x31, 0x75, 0x29, 0x2c, 0x20, // (texCoord, 1u), 
	0x75, 0x69, 0x6e, 0x74, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x67, 0x20, 0x2a, 0x20, 0x32, // uint(color.g * 2
	0x35, 0x35, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x41, 0x74, 0x6f, // 55.0));.imageAto
	0x6d, 0x69, 0x63, 0x41, 0x64, 0x64, 0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, // micAdd(u_rayBund
	0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, // leLightmapSample
	0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, // r, rayBundleLigh
	0x74, 0x6d, 0x61, 0x70, 0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x74, 0x65, 0x78, 0x43, 0x6f, // tmapDataUv(texCo
	0x6f, 0x72, 0x64, 0x2c, 0x20, 0x32, 0x75, 0x29, 0x2c, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x63, // ord, 2u), uint(c
	0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x62, 0x20, 0x2a, 0x20, 0x32, 0x35, 0x35, 0x2e, 0x30, 0x29, 0x29, // olor.b * 255.0))
	0x3b, 0x0a, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x41, 0x74, 0x6f, 0x6d, 0x69, 0x63, 0x41, 0x64, 0x64, // ;.imageAtomicAdd
	0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, // (u_rayBundleLigh
	0x74, 0x6d, 0x61, 0x70, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, // tmapSampler, ray
	0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x44, 0x61, // BundleLightmapDa
	0x74, 0x61, 0x55, 0x76, 0x28, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x2c, 0x20, 0x33, // taUv(texCoord, 3
	0x75, 0x29, 0x2c, 0x20, 0x31, 0x75, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x7d, 0x0a, 0x73, 0x74, 0x72, // u), 1u);.}.}.str
	0x75, 0x63, 0x74, 0x20, 0x4e, 0x6f, 0x64, 0x65, 0x0a, 0x7b, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, // uct Node.{.vec3 
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x64, 0x65, 0x70, // color;.float dep
	0x74, 0x68, 0x3b, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, // th;.vec3 normal;
	0x0a, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x3b, 0x0a, // .vec2 texcoord;.
	0x7d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x29, 0x0a, 0x7b, // };.void main().{
	0x0a, 0x69, 0x76, 0x65, 0x63, 0x32, 0x20, 0x75, 0x76, 0x20, 0x3d, 0x20, 0x69, 0x76, 0x65, 0x63, // .ivec2 uv = ivec
	0x32, 0x28, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x2e, 0x78, // 2(gl_FragCoord.x
	0x79, 0x29, 0x3b, 0x0a, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, // y);.uint offset 
	0x3d, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x61, 0x64, 0x28, 0x75, 0x5f, 0x72, 0x61, // = imageLoad(u_ra
	0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x48, 0x65, 0x61, 0x64, 0x65, 0x72, 0x53, 0x61, 0x6d, // yBundleHeaderSam
	0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x75, 0x76, 0x29, 0x2e, 0x78, 0x3b, 0x0a, 0x69, 0x66, 0x20, // pler, uv).x;.if 
	0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, 0x21, 0x3d, 0x20, 0x30, 0x78, 0x66, 0x66, 0x66, // (offset != 0xfff
	0x66, 0x66, 0x66, 0x66, 0x66, 0x29, 0x20, 0x7b, 0x0a, 0x4e, 0x6f, 0x64, 0x65, 0x20, 0x6e, 0x6f, // fffff) {.Node no
	0x64, 0x65, 0x73, 0x5b, 0x36, 0x34, 0x5d, 0x3b, 0x0a, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x6e, 0x75, // des[64];.uint nu
	0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x3d, 0x20, 0x30, 0x75, 0x3b, 0x0a, 0x77, 0x68, 0x69, // mNodes = 0u;.whi
	0x6c, 0x65, 0x20, 0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, 0x21, 0x3d, 0x20, 0x30, 0x78, // le (offset != 0x
	0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x20, 0x26, 0x26, 0x20, 0x6e, 0x75, 0x6d, 0x4e, // ffffffff && numN
	0x6f, 0x64, 0x65, 0x73, 0x20, 0x3c, 0x20, 0x36, 0x34, 0x29, 0x20, 0x7b, 0x0a, 0x75, 0x76, 0x65, // odes < 64) {.uve
	0x63, 0x34, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, // c4 color_offset 
	0x3d, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x61, 0x64, 0x28, 0x75, 0x5f, 0x72, 0x61, // = imageLoad(u_ra
	0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, 0x61, 0x53, 0x61, 0x6d, 0x70, 0x6c, // yBundleDataSampl
	0x65, 0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, // er, rayBundleDat
	0x61, 0x55, 0x76, 0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x2c, 0x20, 0x30, 0x75, 0x29, 0x29, // aUv(offset, 0u))
	0x3b, 0x0a, 0x75, 0x76, 0x65, 0x63, 0x34, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, 0x64, // ;.uvec4 normal_d
	0x65, 0x70, 0x74, 0x68, 0x20, 0x3d, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x61, 0x64, // epth = imageLoad
	0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, 0x61, // (u_rayBundleData
	0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, // Sampler, rayBund
	0x6c, 0x65, 0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x2c, // leDataUv(offset,
	0x20, 0x31, 0x75, 0x29, 0x29, 0x3b, 0x0a, 0x75, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x65, 0x78, //  1u));.uvec4 tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x3d, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x61, // coord = imageLoa
	0x64, 0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, // d(u_rayBundleDat
	0x61, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, // aSampler, rayBun
	0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, // dleDataUv(offset
	0x2c, 0x20, 0x32, 0x75, 0x29, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, // , 2u));.nodes[nu
	0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x72, 0x20, // mNodes].color.r 
	0x3d, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, 0x6c, 0x6f, 0x61, // = uintBitsToFloa
	0x74, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x2e, 0x72, // t(color_offset.r
	0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, // );.nodes[numNode
	0x73, 0x5d, 0x2e, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x67, 0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, // s].color.g = uin
	0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x63, 0x6f, 0x6c, // tBitsToFloat(col
	0x6f, 0x72, 0x5f, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x2e, 0x67, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, // or_offset.g);.no
	0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, 0x63, 0x6f, // des[numNodes].co
	0x6c, 0x6f, 0x72, 0x2e, 0x62, 0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, // lor.b = uintBits
	0x54, 0x6f, 0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x6f, 0x66, // ToFloat(color_of
	0x66, 0x73, 0x65, 0x74, 0x2e, 0x62, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, // fset.b);.nodes[n
	0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, // umNodes].normal.
	0x78, 0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, 0x6c, // x = uintBitsToFl
	0x6f, 0x61, 0x74, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, 0x64, 0x65, 0x70, 0x74, 0x68, // oat(normal_depth
	0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, // .x);.nodes[numNo
	0x64, 0x65, 0x73, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, 0x79, 0x20, 0x3d, 0x20, // des].normal.y = 
	0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, // uintBitsToFloat(
	0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, 0x64, 0x65, 0x70, 0x74, 0x68, 0x2e, 0x79, 0x29, 0x3b, // normal_depth.y);
	0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x5d, // .nodes[numNodes]
	0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, 0x74, // .normal.z = uint
	0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x6e, 0x6f, 0x72, 0x6d, // BitsToFloat(norm
	0x61, 0x6c, 0x5f, 0x64, 0x65, 0x70, 0x74, 0x68, 0x2e, 0x7a, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, // al_depth.z);.nod
	0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, 0x64, 0x65, 0x70, // es[numNodes].dep
	0x74, 0x68, 0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, // th = uintBitsToF
	0x6c, 0x6f, 0x61, 0x74, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, 0x64, 0x65, 0x70, 0x74, // loat(normal_dept
	0x68, 0x2e, 0x77, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, // h.w);.nodes[numN
	0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x3d, // odes].texcoord =
	0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, //  vec2(uintBitsTo
	0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x2e, 0x78, // Float(texcoord.x
	0x29, 0x2c, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, 0x6c, 0x6f, // ), uintBitsToFlo
	0x61, 0x74, 0x28, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x2e, 0x79, 0x29, 0x29, 0x3b, // at(texcoord.y));
	0x0a, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, 0x3d, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, // .offset = color_
	0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x2e, 0x77, 0x3b, 0x0a, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, // offset.w;.numNod
	0x65, 0x73, 0x2b, 0x2b, 0x3b, 0x0a, 0x7d, 0x0a, 0x66, 0x6f, 0x72, 0x20, 0x28, 0x75, 0x69, 0x6e, // es++;.}.for (uin
	0x74, 0x20, 0x69, 0x20, 0x3d, 0x20, 0x30, 0x75, 0x3b, 0x20, 0x69, 0x20, 0x3c, 0x20, 0x6e, 0x75, // t i = 0u; i < nu
	0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x3b, 0x20, 0x69, 0x2b, 0x2b, 0x29, 0x20, 0x7b, 0x0a, 0x66, // mNodes; i++) {.f
	0x6f, 0x72, 0x20, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x6a, 0x20, 0x3d, 0x20, 0x69, 0x20, 0x2b, // or (uint j = i +
	0x20, 0x31, 0x75, 0x3b, 0x20, 0x6a, 0x20, 0x3c, 0x20, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, //  1u; j < numNode
	0x73, 0x3b, 0x20, 0x6a, 0x2b, 0x2b, 0x29, 0x20, 0x7b, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x6e, 0x6f, // s; j++) {.if (no
	0x64, 0x65, 0x73, 0x5b, 0x69, 0x5d, 0x2e, 0x64, 0x65, 0x70, 0x74, 0x68, 0x20, 0x3e, 0x20, 0x6e, // des[i].depth > n
	0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6a, 0x5d, 0x2e, 0x64, 0x65, 0x70, 0x74, 0x68, 0x20, 0x7c, 0x7c, // odes[j].depth ||
	0x20, 0x28, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x69, 0x5d, 0x2e, 0x64, 0x65, 0x70, 0x74, 0x68, //  (nodes[i].depth
	0x20, 0x3d, 0x3d, 0x20, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6a, 0x5d, 0x2e, 0x64, 0x65, 0x70, //  == nodes[j].dep
	0x74, 0x68, 0x20, 0x26, 0x26, 0x20, 0x64, 0x6f, 0x74, 0x28, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, // th && dot(nodes[
	0x69, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2c, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, // i].normal, u_ray
	0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x3e, 0x20, 0x30, 0x2e, // Normal.xyz) > 0.
	0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x4e, 0x6f, 0x64, 0x65, 0x20, 0x74, 0x65, 0x6d, 0x70, 0x20, // 0)) {.Node temp 
	0x3d, 0x20, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x69, 0x5d, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, // = nodes[i];.node
	0x73, 0x5b, 0x69, 0x5d, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6a, 0x5d, 0x3b, // s[i] = nodes[j];
	0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6a, 0x5d, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x6d, 0x70, // .nodes[j] = temp
	0x3b, 0x0a, 0x7d, 0x0a, 0x7d, 0x0a, 0x7d, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x75, 0x69, 0x6e, 0x74, // ;.}.}.}.if (uint
	0x28, 0x75, 0x5f, 0x73, 0x6b, 0x79, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x65, 0x6e, 0x61, 0x62, // (u_skyColor_enab
	0x6c, 0x65, 0x64, 0x2e, 0x77, 0x29, 0x20, 0x21, 0x3d, 0x20, 0x30, 0x75, 0x20, 0x26, 0x26, 0x20, // led.w) != 0u && 
	0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x3e, 0x20, 0x30, 0x75, 0x29, 0x20, 0x7b, // numNodes > 0u) {
	0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x64, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x74, 0x28, 0x6e, // .float d = dot(n
	0x6f, 0x64, 0x65, 0x73, 0x5b, 0x30, 0x75, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2c, // odes[0u].normal,
	0x20, 0x2d, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, 0x78, 0x79, //  -u_rayNormal.xy
	0x7a, 0x29, 0x3b, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x64, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, // z);.if (d > 0.0)
	0x0a, 0x73, 0x65, 0x74, 0x4c, 0x75, 0x78, 0x65, 0x6c, 0x28, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, // .setLuxel(nodes[
	0x30, 0x75, 0x5d, 0x2e, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x2c, 0x20, 0x75, 0x5f, // 0u].texcoord, u_
	0x73, 0x6b, 0x79, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x65, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, // skyColor_enabled
	0x2e, 0x72, 0x67, 0x62, 0x20, 0x2a, 0x20, 0x64, 0x29, 0x3b, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x6e, // .rgb * d);.if (n
	0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x3e, 0x20, 0x31, 0x75, 0x29, 0x20, 0x7b, 0x0a, // umNodes > 1u) {.
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x64, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x74, 0x28, 0x6e, 0x6f, // float d = dot(no
	0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x2d, 0x20, 0x31, // des[numNodes - 1
	0x75, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2c, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, // u].normal, u_ray
	0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x69, 0x66, 0x20, // Normal.xyz);.if 
	0x28, 0x64, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x0a, 0x73, 0x65, 0x74, 0x4c, 0x75, 0x78, // (d > 0.0).setLux
	0x65, 0x6c, 0x28, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, // el(nodes[numNode
	0x73, 0x20, 0x2d, 0x20, 0x31, 0x75, 0x5d, 0x2e, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // s - 1u].texcoord
	0x2c, 0x20, 0x75, 0x5f, 0x73, 0x6b, 0x79, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x65, 0x6e, 0x61, // , u_skyColor_ena
	0x62, 0x6c, 0x65, 0x64, 0x2e, 0x72, 0x67, 0x62, 0x20, 0x2a, 0x20, 0x64, 0x29, 0x3b, 0x0a, 0x7d, // bled.rgb * d);.}
	0x0a, 0x7d, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, // .}.if (numNodes 
	0x3e, 0x3d, 0x20, 0x32, 0x75, 0x29, 0x20, 0x7b, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x62, // >= 2u) {.float b
	0x72, 0x64, 0x66, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x66, 0x6f, 0x72, 0x20, 0x28, // rdf = 1.0;.for (
	0x75, 0x69, 0x6e, 0x74, 0x20, 0x69, 0x20, 0x3d, 0x20, 0x30, 0x75, 0x3b, 0x20, 0x69, 0x20, 0x3c, // uint i = 0u; i <
	0x20, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x2d, 0x20, 0x31, 0x75, 0x3b, 0x20, //  numNodes - 1u; 
	0x69, 0x2b, 0x2b, 0x29, 0x20, 0x7b, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x64, 0x31, 0x20, // i++) {.float d1 
	0x3d, 0x20, 0x64, 0x6f, 0x74, 0x28, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x69, 0x20, 0x2b, 0x20, // = dot(nodes[i + 
	0x30, 0x75, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2c, 0x20, 0x75, 0x5f, 0x72, 0x61, // 0u].normal, u_ra
	0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x66, 0x6c, // yNormal.xyz);.fl
	0x6f, 0x61, 0x74, 0x20, 0x64, 0x32, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x74, 0x28, 0x6e, 0x6f, 0x64, // oat d2 = dot(nod
	0x65, 0x73, 0x5b, 0x69, 0x20, 0x2b, 0x20, 0x31, 0x75, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // es[i + 1u].norma
	0x6c, 0x2c, 0x20, 0x2d, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, // l, -u_rayNormal.
	0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x64, 0x31, 0x20, 0x3e, 0x20, 0x30, // xyz);.if (d1 > 0
	0x2e, 0x30, 0x20, 0x26, 0x26, 0x20, 0x64, 0x32, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x20, // .0 && d2 > 0.0) 
	0x7b, 0x0a, 0x73, 0x65, 0x74, 0x4c, 0x75, 0x78, 0x65, 0x6c, 0x28, 0x6e, 0x6f, 0x64, 0x65, 0x73, // {.setLuxel(nodes
	0x5b, 0x69, 0x20, 0x2b, 0x20, 0x31, 0x75, 0x5d, 0x2e, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // [i + 1u].texcoor
	0x64, 0x2c, 0x20, 0x62, 0x72, 0x64, 0x66, 0x20, 0x2a, 0x20, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, // d, brdf * nodes[
	0x69, 0x20, 0x2b, 0x20, 0x30, 0x75, 0x5d, 0x2e, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x2a, 0x20, // i + 0u].color * 
	0x64, 0x32, 0x29, 0x3b, 0x0a, 0x73, 0x65, 0x74, 0x4c, 0x75, 0x78, 0x65, 0x6c, 0x28, 0x6e, 0x6f, // d2);.setLuxel(no
	0x64, 0x65, 0x73, 0x5b, 0x69, 0x20, 0x2b, 0x20, 0x30, 0x75, 0x5d, 0x2e, 0x74, 0x65, 0x78, 0x63, // des[i + 0u].texc
	0x6f, 0x6f, 0x72, 0x64, 0x2c, 0x20, 0x62, 0x72, 0x64, 0x66, 0x20, 0x2a, 0x20, 0x6e, 0x6f, 0x64, // oord, brdf * nod
	0x65, 0x73, 0x5b, 0x69, 0x20, 0x2b, 0x20, 0x31, 0x75, 0x5d, 0x2e, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // es[i + 1u].color
	0x20, 0x2a, 0x20, 0x64, 0x31, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x7d, 0x0a, 0x7d, 0x0a, 0x7d, 0x0a, //  * d1);.}.}.}.}.
	0x7d, 0x0a, 0x00,                                                                               // }..
};
