#include <iostream>
#include <cstdlib>

#include <Vector4.hpp>
#include <Matrix4x4.hpp>

#define COMPUTE_AND_DISPLAY(op) \
    std::cout << "[" << #op << "]" << std::endl; \
    std::cout << (op) << std::endl << std::endl; 

int main(int argc, char* argv[]) {
    Vector4 vec1;
    Vector4 vec2;
    Vector4 vec3;

    auto resetVectors = [&vec1, &vec2, &vec3]() -> void {
        vec1 = Vector4();
        vec2 = Vector4(1.0f);
        vec3 = Vector4(1.0f, 2.0f, 3.0f, 4.0f);
    };

    resetVectors();

    COMPUTE_AND_DISPLAY(vec1);
    COMPUTE_AND_DISPLAY(vec2);
    COMPUTE_AND_DISPLAY(vec3);
    
    resetVectors();

    COMPUTE_AND_DISPLAY(vec2 + vec3);
    COMPUTE_AND_DISPLAY(vec2 += vec3);

    resetVectors();

    COMPUTE_AND_DISPLAY(-vec3);
    COMPUTE_AND_DISPLAY(vec2 - vec3);
    COMPUTE_AND_DISPLAY(vec2 -= vec3);

    resetVectors();

    COMPUTE_AND_DISPLAY(vec3 * 3);
    COMPUTE_AND_DISPLAY(3 * vec3);
    COMPUTE_AND_DISPLAY(vec3 *= 4);

    resetVectors();

    COMPUTE_AND_DISPLAY(vec2 / 2);
    COMPUTE_AND_DISPLAY(vec2 /= 3);

    resetVectors();

    COMPUTE_AND_DISPLAY(Vector4::Dot(vec2, vec3));
    COMPUTE_AND_DISPLAY(Vector4::Magnitude(vec3));
    COMPUTE_AND_DISPLAY(vec3.Normalized());

    Matrix4x4 mat1;
    Matrix4x4 mat2;
    Matrix4x4 mat3;

    auto resetMatrices = [&mat1, &mat2, &mat3]() -> void {
        mat1 = Matrix4x4(1.0f);
        mat2 = Matrix4x4(1.0f, 2.0f, 3.0f, 4.0f);
        mat3 = Matrix4x4(1.0f, 2.0f, 3.0f, 4.0f,
                         4.0f, 3.0f, 2.0f, 1.0f,
                         1.0f, 2.0f, 3.0f, 4.0f,
                         4.0f, 3.0f, 2.0f, 1.0f);
    };

    resetMatrices();

    COMPUTE_AND_DISPLAY(mat1);
    COMPUTE_AND_DISPLAY(mat2);
    COMPUTE_AND_DISPLAY(mat3);
    
    resetMatrices();

    COMPUTE_AND_DISPLAY(mat2 + mat3);
    COMPUTE_AND_DISPLAY(mat2 += mat3);

    resetMatrices();

    COMPUTE_AND_DISPLAY(-mat3);
    COMPUTE_AND_DISPLAY(mat2 - mat3);
    COMPUTE_AND_DISPLAY(mat2 -= mat3);

    resetMatrices();

    COMPUTE_AND_DISPLAY(mat2 * mat3);
    COMPUTE_AND_DISPLAY(2 * mat2);
    COMPUTE_AND_DISPLAY(mat2 * 4);

    resetMatrices();

    COMPUTE_AND_DISPLAY(mat2 *= mat3);

    resetMatrices();

    COMPUTE_AND_DISPLAY(mat3 *= 3);

    resetMatrices();

    COMPUTE_AND_DISPLAY(mat3 / 2);
    COMPUTE_AND_DISPLAY(mat3 /= 5);

    resetMatrices();

    COMPUTE_AND_DISPLAY(Matrix4x4::Transpose(mat3));
    COMPUTE_AND_DISPLAY(mat3);

    resetMatrices();

    COMPUTE_AND_DISPLAY(mat3.Transposed());
    COMPUTE_AND_DISPLAY(mat3);

    resetMatrices();

    COMPUTE_AND_DISPLAY(mat3.Line(2));
    COMPUTE_AND_DISPLAY(mat3.Column(3));

    return EXIT_SUCCESS;
}