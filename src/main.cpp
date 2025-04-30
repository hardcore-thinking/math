#include <iostream>
#include <cstdlib>

#include <Vector3.hpp>
#include <Vector4.hpp>
#include <Matrix4x4.hpp>

#define COMPUTE_AND_DISPLAY(op) \
    std::cout << "[" << #op << "]" << std::endl; \
    std::cout << (op) << std::endl << std::endl; 

int main(int argc, char* argv[]) {
    Vector2 vec2_1;
    Vector2 vec2_2;
    Vector2 vec2_3;

    auto resetVectors2 = [&]() -> void {
        vec2_1 = Vector2();
        vec2_2 = Vector2(1.0f);
        vec2_3 = Vector2(1.0f, 2.0f);
    };

    resetVectors2();

    COMPUTE_AND_DISPLAY(vec2_1);
    COMPUTE_AND_DISPLAY(vec2_2);
    COMPUTE_AND_DISPLAY(vec2_3);
    
    resetVectors2();

    COMPUTE_AND_DISPLAY(vec2_2 + vec2_3);
    COMPUTE_AND_DISPLAY(vec2_2 += vec2_3);

    resetVectors2();

    COMPUTE_AND_DISPLAY(-vec2_3);
    COMPUTE_AND_DISPLAY(vec2_2 - vec2_3);
    COMPUTE_AND_DISPLAY(vec2_2 -= vec2_3);

    resetVectors2();

    COMPUTE_AND_DISPLAY(vec2_3 * 3);
    COMPUTE_AND_DISPLAY(3 * vec2_3);
    COMPUTE_AND_DISPLAY(vec2_3 *= 4);

    resetVectors2();

    COMPUTE_AND_DISPLAY(vec2_2 / 2);
    COMPUTE_AND_DISPLAY(vec2_2 /= 3);

    resetVectors2();

    COMPUTE_AND_DISPLAY(Vector2::Dot(vec2_2, vec2_3));
    COMPUTE_AND_DISPLAY(Vector2::Magnitude(vec2_3));
    COMPUTE_AND_DISPLAY(Vector2::Normalize(vec2_3));
    COMPUTE_AND_DISPLAY(vec2_3.Normalized());

    resetVectors2();

    Vector3 vec3_1;
    Vector3 vec3_2;
    Vector3 vec3_3;
    Vector3 vec3_4;
    Vector3 vec3_5;

    auto resetVectors3 = [&]() -> void {
        vec3_1 = Vector3();
        vec3_2 = Vector3(1.0f);
        vec3_3 = Vector3(1.0f, 2.0f, 3.0f);
        vec3_4 = Vector3(vec2_3, 4.0f);
        vec3_5 = Vector3(1.0f, vec2_3);
    };

    resetVectors3();

    COMPUTE_AND_DISPLAY(vec3_1);
    COMPUTE_AND_DISPLAY(vec3_2);
    COMPUTE_AND_DISPLAY(vec3_3);
    COMPUTE_AND_DISPLAY(vec3_4);
    COMPUTE_AND_DISPLAY(vec3_5);
    
    resetVectors3();

    COMPUTE_AND_DISPLAY(vec3_2 + vec3_3);
    COMPUTE_AND_DISPLAY(vec3_2 += vec3_3);

    resetVectors3();

    COMPUTE_AND_DISPLAY(-vec3_3);
    COMPUTE_AND_DISPLAY(vec3_2 - vec3_3);
    COMPUTE_AND_DISPLAY(vec3_2 -= vec3_3);

    resetVectors3();

    COMPUTE_AND_DISPLAY(vec3_3 * 3);
    COMPUTE_AND_DISPLAY(3 * vec3_3);
    COMPUTE_AND_DISPLAY(vec3_3 *= 4);

    resetVectors3();

    COMPUTE_AND_DISPLAY(vec3_2 / 2);
    COMPUTE_AND_DISPLAY(vec3_2 /= 3);

    resetVectors3();

    COMPUTE_AND_DISPLAY(Vector3::Dot(vec3_2, vec3_3));
    COMPUTE_AND_DISPLAY(Vector3::Cross(vec3_2, vec3_3));
    COMPUTE_AND_DISPLAY(Vector3::Magnitude(vec3_3));
    COMPUTE_AND_DISPLAY(Vector3::Normalize(vec3_3));
    COMPUTE_AND_DISPLAY(vec3_3.Normalized());

    resetVectors3();

    Vector4 vec4_1;
    Vector4 vec4_2;
    Vector4 vec4_3;
    Vector4 vec4_4;
    Vector4 vec4_5;
    Vector4 vec4_6;
    Vector4 vec4_7;
    Vector4 vec4_8;
    Vector4 vec4_9;

    auto resetVectors4 = [&]() -> void {
        vec4_1 = Vector4();
        vec4_2 = Vector4(1.0f);
        vec4_3 = Vector4(1.0f, 2.0f, 3.0f, 4.0f);
        vec4_4 = Vector4(vec3_3, 4.0f);
        vec4_5 = Vector4(1.0f, vec3_3);
        vec4_6 = Vector4(vec2_3, 3.0f, 4.0f);
        vec4_7 = Vector4(1.0f, vec2_3, 4.0f);
        vec4_8 = Vector4(1.0f, 3.0f, vec2_3);
        vec4_9 = Vector4(vec2_2, vec2_3);
    };

    resetVectors4();

    COMPUTE_AND_DISPLAY(vec4_1);
    COMPUTE_AND_DISPLAY(vec4_2);
    COMPUTE_AND_DISPLAY(vec4_3);
    COMPUTE_AND_DISPLAY(vec4_4);
    COMPUTE_AND_DISPLAY(vec4_5);
    COMPUTE_AND_DISPLAY(vec4_6);
    COMPUTE_AND_DISPLAY(vec4_7);
    COMPUTE_AND_DISPLAY(vec4_8);
    COMPUTE_AND_DISPLAY(vec4_9);
    
    resetVectors4();

    COMPUTE_AND_DISPLAY(vec4_2 + vec4_3);
    COMPUTE_AND_DISPLAY(vec4_2 += vec4_3);

    resetVectors4();

    COMPUTE_AND_DISPLAY(-vec4_3);
    COMPUTE_AND_DISPLAY(vec4_2 - vec4_3);
    COMPUTE_AND_DISPLAY(vec4_2 -= vec4_3);

    resetVectors4();

    COMPUTE_AND_DISPLAY(vec4_3 * 3);
    COMPUTE_AND_DISPLAY(3 * vec4_3);
    COMPUTE_AND_DISPLAY(vec4_3 *= 4);

    resetVectors4();

    COMPUTE_AND_DISPLAY(vec4_2 / 2);
    COMPUTE_AND_DISPLAY(vec4_2 /= 3);

    resetVectors4();

    COMPUTE_AND_DISPLAY(Vector4::Dot(vec4_2, vec4_3));
    COMPUTE_AND_DISPLAY(Vector4::Magnitude(vec4_3));
    COMPUTE_AND_DISPLAY(Vector4::Normalize(vec4_3));
    COMPUTE_AND_DISPLAY(vec4_3.Normalized());   

    resetVectors4();

    Matrix4x4 mat1;
    Matrix4x4 mat2;
    Matrix4x4 mat3;
    Matrix4x4 mat4;
    Matrix4x4 mat5;

    auto resetMatrices4x4 = [&]() -> void {
        mat1 = Matrix4x4(1.0f);
        mat2 = Matrix4x4(1.0f, 2.0f, 3.0f, 4.0f);
        mat3 = Matrix4x4(1.0f, 2.0f, 3.0f, 4.0f,
                         4.0f, 3.0f, 2.0f, 1.0f,
                         1.0f, 2.0f, 3.0f, 4.0f,
                         4.0f, 3.0f, 2.0f, 1.0f);
        mat4 = Matrix4x4(vec4_2, vec4_3, vec4_4, vec4_5);
        mat5 = Matrix4x4(vec4_2, vec4_3, vec4_4, vec4_5, true);
    };

    resetMatrices4x4();

    COMPUTE_AND_DISPLAY(mat1);
    COMPUTE_AND_DISPLAY(mat2);
    COMPUTE_AND_DISPLAY(mat3);
    COMPUTE_AND_DISPLAY(mat4);
    COMPUTE_AND_DISPLAY(mat5);
    
    resetMatrices4x4();

    COMPUTE_AND_DISPLAY(mat2 + mat3);
    COMPUTE_AND_DISPLAY(mat2 += mat3);

    resetMatrices4x4();

    COMPUTE_AND_DISPLAY(-mat3);
    COMPUTE_AND_DISPLAY(mat2 - mat3);
    COMPUTE_AND_DISPLAY(mat2 -= mat3);

    resetMatrices4x4();

    COMPUTE_AND_DISPLAY(mat2 * mat3);
    COMPUTE_AND_DISPLAY(2 * mat2);
    COMPUTE_AND_DISPLAY(mat2 * 4);

    resetMatrices4x4();

    COMPUTE_AND_DISPLAY(mat2 *= mat3);

    resetMatrices4x4();

    COMPUTE_AND_DISPLAY(mat3 *= 3);

    resetMatrices4x4();

    COMPUTE_AND_DISPLAY(mat3 / 2);
    COMPUTE_AND_DISPLAY(mat3 /= 5);

    resetMatrices4x4();

    COMPUTE_AND_DISPLAY(Matrix4x4::Transpose(mat3));
    COMPUTE_AND_DISPLAY(mat3);

    resetMatrices4x4();

    COMPUTE_AND_DISPLAY(mat3.Transposed());
    COMPUTE_AND_DISPLAY(mat3);

    resetMatrices4x4();

    COMPUTE_AND_DISPLAY(mat3.Line(2));
    COMPUTE_AND_DISPLAY(mat3.Column(3));

    resetMatrices4x4();

    return EXIT_SUCCESS;
}