#version 120
#extension GL_EXT_gpu_shader4 : enable
#extension GL_ARB_texture_rectangle : enable

uniform sampler2DRect posTex;
uniform vec2 screen;
uniform vec2 screenPos;
uniform float scale;

void main() {
    // use the texture coordinates as an index into the position texture
    vec2 verPos = gl_MultiTexCoord0.xy;

    // read position data from texture
    vec4 pixPos = texture2DRect( posTex, verPos );
    
    // Maps the position from the texture (from 0.0 to 1.0) to
    // the screen position (0 - screenWidth/screenHeight)
    //
    pixPos.x -= .5;
    pixPos.y -= .5;
    pixPos.x *= scale;
    pixPos.y *= scale;
    pixPos.x += .5;
    pixPos.y += .5;
    pixPos.x   += screenPos.x;
    pixPos.y   += screenPos.y;
    pixPos.x *= screen.x;
    pixPos.y *= screen.y;
    
    gl_Position = pixPos;
    gl_FrontColor =  gl_Color;
}