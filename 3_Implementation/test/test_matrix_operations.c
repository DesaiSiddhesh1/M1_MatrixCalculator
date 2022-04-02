#include "unity.h"
#include "matrix_operations.h"

#define PROJECT_NAME "Matrix Calculator"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for addition of 2 matrices
 *
 */
void test_addition_matrices(void);

/**
 * @brief Testing function for subtraction of 2 matrices
 *
 */
void test_subtract_matrices(void);

/**
 * @brief Testing function for multiplication of 2 matrices
 *
 */
void test_multiply_matrices(void);

/**
 * @brief Testing function for finding determiant of matrix
 *
 */
void test_determinant_matrices(void);

/**
 * @brief To test the power function of (-1)^exp
 *
 */
void test_pow(void);

/**
 * @brief Testing function for transpose of a matrix
 *
 */
void test_transpose_matrices(void);

/* Required by the unity test framework */
void setUp() {}
/* Required by the unity test framework */
void tearDown() {}

/* Start of the application test */
int main()
{
  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

  /* Run Test functions */
  RUN_TEST(test_addition_matrices);
  RUN_TEST(test_subtract_matrices);
  RUN_TEST(test_multiply_matrices);
  RUN_TEST(test_pow);
  RUN_TEST(test_determinant_matrices);
  RUN_TEST(test_transpose_matrices);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */
void test_addition_matrices(void)
{

  float **test_matrices1, **test_matrices2;
  test_matrices1 = (float **)calloc(2, sizeof(float));
  test_matrices2 = (float **)calloc(2, sizeof(float));
  for (int i = 0; i < 2; i++)
  {
    test_matrices1[i] = (float *)calloc(2, sizeof(float));
    test_matrices2[i] = (float *)calloc(2, sizeof(float));
  }

  test_matrices1[0][0] = 1;
  test_matrices1[0][1] = 2;
  test_matrices1[1][0] = 3;
  test_matrices1[1][1] = 4;

  test_matrices2[0][0] = 5;
  test_matrices2[0][1] = 6;
  test_matrices2[1][0] = 7;
  test_matrices2[1][1] = 8;

  TEST_ASSERT_EQUAL(SUCCESS, add_matrices(test_matrices1, test_matrices2, 2));

  free(test_matrices1);
  free(test_matrices2);
}

void test_subtract_matrices(void)
{

  float **test_matrices1, **test_matrices2;
  test_matrices1 = (float **)calloc(2, sizeof(float));
  test_matrices2 = (float **)calloc(2, sizeof(float));
  for (int i = 0; i < 2; i++)
  {
    test_matrices1[i] = (float *)calloc(2, sizeof(float));
    test_matrices2[i] = (float *)calloc(2, sizeof(float));
  }

  test_matrices1[0][0] = 2;
  test_matrices1[0][1] = 3;
  test_matrices1[1][0] = 4;
  test_matrices1[1][1] = 6;

  test_matrices2[0][0] = 7;
  test_matrices2[0][1] = 5;
  test_matrices2[1][0] = 3;
  test_matrices2[1][1] = 1;

  TEST_ASSERT_EQUAL(SUCCESS, subtract_matrices(test_matrices1, test_matrices2, 2));

  free(test_matrices1);
  free(test_matrices2);
}

void test_multiply_matrices(void)
{
  float **test_matrices1, **test_matrices2;
  test_matrices1 = (float **)calloc(2, sizeof(float));
  test_matrices2 = (float **)calloc(2, sizeof(float));
  for (int i = 0; i < 2; i++)
  {
    test_matrices1[i] = (float *)calloc(2, sizeof(float));
    test_matrices2[i] = (float *)calloc(2, sizeof(float));
  }

  test_matrices1[0][0] = 1;
  test_matrices1[0][1] = 2;
  test_matrices1[1][0] = 3;
  test_matrices1[1][1] = 4;

  test_matrices2[0][0] = 5;
  test_matrices2[0][1] = 6;
  test_matrices2[1][0] = 7;
  test_matrices2[1][1] = 8;

  TEST_ASSERT_EQUAL(SUCCESS, product_matrices(test_matrices1, test_matrices2, 2));

  free(test_matrices1);
  free(test_matrices2);
}

void test_determinant_matrices(void)
{

  float **test_matrices1;
  test_matrices1 = (float **)calloc(2, sizeof(float));
  for (int i = 0; i < 2; i++)
  {
    test_matrices1[i] = (float *)calloc(2, sizeof(float));
  }

  test_matrices1[0][0] = 5;
  test_matrices1[0][1] = 3;
  test_matrices1[1][0] = 2;
  test_matrices1[1][1] = 4;

  TEST_ASSERT_EQUAL(7.0000, determinant(test_matrices1, 2));

  free(test_matrices1);
}

void test_pow(void)
{

  TEST_ASSERT_EQUAL(1, power(2));
  TEST_ASSERT_EQUAL(-1, power(3));
}
void test_transpose_matrices(void)
{
  float **test_matrices1;
  test_matrices1 = (float **)calloc(3, sizeof(float));
  for (int i = 0; i < 3; i++)
  {
    test_matrices1[i] = (float *)calloc(3, sizeof(float));
  }

  test_matrices1[0][0] = 3;
  test_matrices1[0][1] = 5;
  test_matrices1[0][2] = 2;
  test_matrices1[1][0] = 1;
  test_matrices1[1][1] = 5;
  test_matrices1[1][2] = 8;
  test_matrices1[2][0] = 3;
  test_matrices1[2][1] = 9;
  test_matrices1[2][2] = 2;

  TEST_ASSERT_EQUAL(SUCCESS, transpose(test_matrices1, 3));

  free(test_matrices1);
}
