/* All asm/ files are generated and point to the corresponding
 * file in asm-i486 or asm-x86_64.
 */

#ifdef __x86_64__
# error This header is not available for x86_64
#else
# include <asm-i486/mach-visws/smpboot_hooks.h>
#endif
