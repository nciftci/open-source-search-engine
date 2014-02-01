/* All asm/ files are generated and point to the corresponding
 * file in asm-i486 or asm-x86_64.
 */

#ifdef __x86_64__
# include <asm-x86_64/spinlock_types.h>
#else
# include <asm-i486/spinlock_types.h>
#endif
