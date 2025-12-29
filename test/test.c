#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

#define EPSILON 1e-9

static int	almost_equal(double a, double b)
{
	double	diff;

	diff = a - b;
	return (diff < EPSILON && diff > -EPSILON);
}

static int	vec_equal(t_vec3 a, t_vec3 b)
{
	return (almost_equal(a.x, b.x) && almost_equal(a.y, b.y)
		&& almost_equal(a.z, b.z));
}

static void	test_vec3_create_and_init(void)
{
	t_vec3		v;
	t_vec3		*allocated;
	t_vec3		target;
	t_vec3		*returned;

	v = vec3(1.0, -2.5, 3.25);
	assert(vec_equal(v, vec3(1.0, -2.5, 3.25)));
	allocated = vec3_alloc();
	assert(allocated != NULL);
	assert(vec_equal(*allocated, vec3(0.0, 0.0, 0.0)));
	free(allocated);
	returned = vec3_init(&target, 2.0, 4.0, 6.0);
	assert(returned == &target);
	assert(vec_equal(target, vec3(2.0, 4.0, 6.0)));
	returned = vec3_init(NULL, -1.0, -2.0, -3.0);
	assert(returned != NULL);
	assert(vec_equal(*returned, vec3(-1.0, -2.0, -3.0)));
	free(returned);
}

static void	test_vec3_arithmetic(void)
{
	t_vec3	a;
	t_vec3	b;

	a = vec3(1.0, 2.0, 3.0);
	b = vec3(-4.0, 5.0, -6.0);
	assert(vec_equal(vec3_add(a, b), vec3(-3.0, 7.0, -3.0)));
	assert(vec_equal(vec3_sub(a, b), vec3(5.0, -3.0, 9.0)));
	assert(vec_equal(vec3_mul(a, 2.5), vec3(2.5, 5.0, 7.5)));
}

static void	test_vec3_dot_length_normalize(void)
{
	t_vec3	a;
	t_vec3	b;
	t_vec3	c;
	t_vec3	normalized;
	t_vec3	zero;

	a = vec3(1.0, 2.0, 3.0);
	b = vec3(4.0, 5.0, 6.0);
	assert(almost_equal(vec3_dot(a, b), 32.0));
	c = vec3(0.0, 3.0, 4.0);
	assert(almost_equal(vec3_length(c), 5.0));
	normalized = vec3_normalize(c);
	assert(vec_equal(normalized, vec3(0.0, 0.6, 0.8)));
	zero = vec3_normalize(vec3(0.0, 0.0, 0.0));
	assert(vec_equal(zero, vec3(0.0, 0.0, 0.0)));
}

int	main(void)
{
	t_vec3 test1, test2, ret;
	double d;
	test1 = vec3(1, 2, 3);
	printf("test1:%lf, %lf, %lf\n", test1.x, test1.y, test1.z);
	test2 = vec3(4, 5, 6);
	printf("test1:%lf, %lf, %lf\n", test2.x, test2.y, test2.z);
	ret = vec3_add(test1, test2);
	printf("vec3_add:%lf, %lf, %lf\n", ret.x, ret.y, ret.z);
	ret = vec3_sub(test1, test2);
	printf("vec3_sub:%lf, %lf, %lf\n", ret.x, ret.y, ret.z);
	ret = vec3_mul(test1, 3);
	printf("vec3_mul:%lf, %lf, %lf\n", ret.x, ret.y, ret.z);
	d = vec3_dot(test1, test2);
	printf("vec3_dot:%lf\n", d);
	test_vec3_create_and_init();
	test_vec3_arithmetic();
	test_vec3_dot_length_normalize();
	printf("All vec3 tests passed\n");
	return (0);
}
