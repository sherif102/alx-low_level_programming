#ifndef OP
#define OP
/**
 * struct op - struct op
 * @op: the operator
 * @f: the function asociated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} opt_t;
#endif /* OP */

#ifndef OP_T
#define OP_T
typedef struct op op_t;
#endif /* OP_T */

#ifndef OP_ADD
#define OP_ADD
int op_add(int a, int b);
#endif /* OP_ADD */

#ifndef OP_SUB
#define OP_SUB
int op_sub(int a, int b);
#endif /* OP_SUB */

#ifndef OP_MUL
#define OP_MUL
int op_mul(int a, int b);
#endif /* OP_MUL */

#ifndef OP_DIV
#define OP_DIV
int op_div(int a, int b);
#endif /* OP_DIV */

#ifndef OP_MOD
#define OP_MOD
int op_mod(int a, int b);
#endif /* OP_MOD */

#ifndef GET_OP_FUNC
#define GET_OP_FUNC
int (*get_op_func(char *s))(int, int);
#endif /* GET_OP_FUNC */
