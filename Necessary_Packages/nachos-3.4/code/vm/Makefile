# NOTE: this is a GNU Makefile.  You must use "gmake" rather than "make".
#
# Makefile for the virtual memory assignment
#    Defines set up assuming the virtual memory assignment is done before 
# 	the file system assignment. If not, use the "filesys first"  
#	defines below. 
#
# Also, if you want to simplify the translation so it assumes
# only linear page tables, don't define USE_TLB.
#
# Copyright (c) 1992 The Regents of the University of California.
# All rights reserved.  See copyright.h for copyright notice and limitation 
# of liability and disclaimer of warranty provisions.

DEFINES = -DUSER_PROGRAM  -DFILESYS_NEEDED -DFILESYS_STUB -DVM -DUSE_TLB
INCPATH = -I../filesys -I../bin -I../vm -I../userprog -I../threads -I../machine
HFILES = $(THREAD_H) $(USERPROG_H) $(VM_H)
CFILES = $(THREAD_C) $(USERPROG_C) $(VM_C)
C_OFILES = $(THREAD_O) $(USERPROG_O) $(VM_O)

# if file sys done first!
# DEFINES = -DUSER_PROGRAM -DFILESYS_NEEDED -DFILESYS -DVM -DUSE_TLB
# INCPATH = -I../vm -I../bin -I../filesys -I../userprog -I../threads -I../machine
# HFILES = $(THREAD_H) $(USERPROG_H) $(FILESYS_H) $(VM_H)
# CFILES = $(THREAD_C) $(USERPROG_C) $(FILESYS_C) $(VM_C)
# C_OFILES = $(THREAD_O) $(USERPROG_O) $(FILESYS_O) $(VM_O)

include ../Makefile.common
include ../Makefile.dep
#-----------------------------------------------------------------
# DO NOT DELETE THIS LINE -- make depend uses it
# DEPENDENCIES MUST END AT END OF FILE
main.o: ../threads/main.cc /usr/include/stdc-predef.h \
 /usr/include/c++/5/string \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/bits/stringfwd.h /usr/include/c++/5/bits/memoryfwd.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/postypes.h /usr/include/c++/5/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/iosfwd \
 /usr/include/c++/5/cctype /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc /usr/include/c++/5/iostream \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/bits/locale_classes.h \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/copyright.h \
 ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
 ../threads/copyright.h ../threads/system.h ../threads/thread.h \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../threads/list.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../machine/timer.h
list.o: ../threads/list.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/list.h ../threads/utility.h \
 ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
 /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc
scheduler.o: ../threads/scheduler.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/scheduler.h ../threads/list.h \
 ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
 ../threads/copyright.h /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/thread.h \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/system.h ../machine/interrupt.h \
 ../threads/list.h ../machine/stats.h ../machine/timer.h
pqscheduler.o: ../threads/pqscheduler.cpp /usr/include/stdc-predef.h \
 ../threads/pqscheduler.h ../threads/scheduler.h ../threads/copyright.h \
 ../threads/list.h ../threads/utility.h ../threads/bool.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/thread.h \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/priorityQueue.h \
 /usr/include/c++/5/vector /usr/include/c++/5/bits/stl_construct.h \
 /usr/include/c++/5/bits/stl_uninitialized.h \
 /usr/include/c++/5/bits/stl_vector.h \
 /usr/include/c++/5/bits/stl_bvector.h /usr/include/c++/5/bits/vector.tcc \
 /usr/include/c++/5/cassert /usr/include/assert.h
sjfscheduler.o: ../threads/sjfscheduler.cpp /usr/include/stdc-predef.h \
 ../threads/sjfscheduler.h ../threads/scheduler.h ../threads/copyright.h \
 ../threads/list.h ../threads/utility.h ../threads/bool.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/thread.h \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h /usr/include/c++/5/vector \
 /usr/include/c++/5/bits/stl_construct.h \
 /usr/include/c++/5/bits/stl_uninitialized.h \
 /usr/include/c++/5/bits/stl_vector.h \
 /usr/include/c++/5/bits/stl_bvector.h /usr/include/c++/5/bits/vector.tcc \
 /usr/include/c++/5/backward/hash_map \
 /usr/include/c++/5/backward/backward_warning.h \
 /usr/include/c++/5/backward/hashtable.h /usr/include/c++/5/iterator \
 /usr/include/c++/5/bits/stream_iterator.h /usr/include/c++/5/algorithm \
 /usr/include/c++/5/utility /usr/include/c++/5/bits/stl_relops.h \
 /usr/include/c++/5/bits/stl_algo.h \
 /usr/include/c++/5/bits/algorithmfwd.h \
 /usr/include/c++/5/bits/stl_heap.h /usr/include/c++/5/bits/stl_tempbuf.h \
 /usr/include/c++/5/random /usr/include/c++/5/cmath /usr/include/math.h \
 /usr/include/bits/math-vector.h /usr/include/bits/libm-simd-decl-stubs.h \
 /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
 /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
 /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
 /usr/include/bits/mathcalls.h /usr/include/c++/5/limits \
 /usr/include/c++/5/bits/random.h \
 /usr/include/c++/5/bits/uniform_int_dist.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/opt_random.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/x86intrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/ia32intrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/mmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/xmmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/mm_malloc.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/emmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/pmmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/tmmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/ammintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/smmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/popcntintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/wmmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/immintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avxintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx2intrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512fintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512erintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512pfintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512cdintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512vlintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512bwintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512dqintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512vlbwintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512vldqintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512ifmaintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512ifmavlintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512vbmiintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512vbmivlintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/shaintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/lzcntintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/bmiintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/bmi2intrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/fmaintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/f16cintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/rtmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/xtestintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/mm3dnow.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/prfchwintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/fma4intrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/xopintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/lwpintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/tbmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/rdseedintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/fxsrintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/xsaveintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/xsaveoptintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/adxintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/clwbintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/pcommitintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/clflushoptintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/xsavesintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/xsavecintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/mwaitxintrin.h \
 /usr/include/c++/5/bits/random.tcc /usr/include/c++/5/numeric \
 /usr/include/c++/5/bits/stl_numeric.h \
 /usr/include/c++/5/backward/hash_fun.h /usr/include/c++/5/unordered_map \
 /usr/include/c++/5/tuple /usr/include/c++/5/array \
 /usr/include/c++/5/bits/uses_allocator.h \
 /usr/include/c++/5/ext/aligned_buffer.h \
 /usr/include/c++/5/bits/hashtable.h \
 /usr/include/c++/5/bits/hashtable_policy.h \
 /usr/include/c++/5/bits/unordered_map.h /usr/include/c++/5/chrono \
 /usr/include/c++/5/ratio /usr/include/c++/5/ctime \
 /usr/include/c++/5/bits/parse_numbers.h
mlscheduler.o: ../threads/mlscheduler.cpp /usr/include/stdc-predef.h \
 ../threads/mlscheduler.h ../threads/scheduler.h ../threads/copyright.h \
 ../threads/list.h ../threads/utility.h ../threads/bool.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/thread.h \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h
rrscheduler.o: ../threads/rrscheduler.cpp /usr/include/stdc-predef.h \
 ../threads/rrscheduler.h ../threads/scheduler.h ../threads/copyright.h \
 ../threads/list.h ../threads/utility.h ../threads/bool.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/thread.h \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h
priorityQueue.o: ../threads/priorityQueue.cpp /usr/include/stdc-predef.h \
 ../threads/priorityQueue.h /usr/include/c++/5/vector \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/memoryfwd.h \
 /usr/include/c++/5/bits/stl_construct.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/bits/stl_uninitialized.h \
 /usr/include/c++/5/bits/stl_vector.h /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/stl_bvector.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/vector.tcc /usr/include/c++/5/iostream \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/postypes.h /usr/include/c++/5/cwchar \
 /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/bits/char_traits.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/c++/5/cassert \
 /usr/include/assert.h ../threads/thread.h ../threads/copyright.h \
 ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
 ../threads/copyright.h ../machine/machine.h ../threads/utility.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h
synch.o: ../threads/synch.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/synch.h ../threads/thread.h \
 /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/utility.h \
 ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/list.h ../threads/system.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h
synchlist.o: ../threads/synchlist.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/synchlist.h ../threads/list.h \
 ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
 ../threads/copyright.h /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/synch.h \
 ../threads/thread.h ../machine/machine.h ../threads/utility.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h
system.o: ../threads/system.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/system.h ../threads/utility.h \
 ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
 /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/thread.h \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../threads/list.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../machine/timer.h ../threads/pqscheduler.h ../threads/priorityQueue.h \
 /usr/include/c++/5/vector /usr/include/c++/5/bits/stl_construct.h \
 /usr/include/c++/5/bits/stl_uninitialized.h \
 /usr/include/c++/5/bits/stl_vector.h \
 /usr/include/c++/5/bits/stl_bvector.h /usr/include/c++/5/bits/vector.tcc \
 /usr/include/c++/5/cassert /usr/include/assert.h \
 ../threads/mlscheduler.h ../threads/rrscheduler.h \
 ../threads/sjfscheduler.h /usr/include/c++/5/backward/hash_map \
 /usr/include/c++/5/backward/backward_warning.h \
 /usr/include/c++/5/backward/hashtable.h /usr/include/c++/5/iterator \
 /usr/include/c++/5/bits/stream_iterator.h /usr/include/c++/5/algorithm \
 /usr/include/c++/5/utility /usr/include/c++/5/bits/stl_relops.h \
 /usr/include/c++/5/bits/stl_algo.h \
 /usr/include/c++/5/bits/algorithmfwd.h \
 /usr/include/c++/5/bits/stl_heap.h /usr/include/c++/5/bits/stl_tempbuf.h \
 /usr/include/c++/5/random /usr/include/c++/5/cmath /usr/include/math.h \
 /usr/include/bits/math-vector.h /usr/include/bits/libm-simd-decl-stubs.h \
 /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h \
 /usr/include/bits/huge_vall.h /usr/include/bits/inf.h \
 /usr/include/bits/nan.h /usr/include/bits/mathdef.h \
 /usr/include/bits/mathcalls.h /usr/include/c++/5/limits \
 /usr/include/c++/5/bits/random.h \
 /usr/include/c++/5/bits/uniform_int_dist.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/opt_random.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/x86intrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/ia32intrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/mmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/xmmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/mm_malloc.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/emmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/pmmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/tmmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/ammintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/smmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/popcntintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/wmmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/immintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avxintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx2intrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512fintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512erintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512pfintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512cdintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512vlintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512bwintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512dqintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512vlbwintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512vldqintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512ifmaintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512ifmavlintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512vbmiintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/avx512vbmivlintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/shaintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/lzcntintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/bmiintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/bmi2intrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/fmaintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/f16cintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/rtmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/xtestintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/mm3dnow.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/prfchwintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/fma4intrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/xopintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/lwpintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/tbmintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/rdseedintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/fxsrintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/xsaveintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/xsaveoptintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/adxintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/clwbintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/pcommitintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/clflushoptintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/xsavesintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/xsavecintrin.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/mwaitxintrin.h \
 /usr/include/c++/5/bits/random.tcc /usr/include/c++/5/numeric \
 /usr/include/c++/5/bits/stl_numeric.h \
 /usr/include/c++/5/backward/hash_fun.h
thread.o: ../threads/thread.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/thread.h /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/utility.h \
 ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/switch.h ../threads/synch.h \
 ../threads/list.h ../threads/system.h ../threads/scheduler.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../machine/timer.h
utility.o: ../threads/utility.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/utility.h ../threads/bool.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc
threadtest.o: ../threads/threadtest.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/system.h ../threads/utility.h \
 ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
 /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/thread.h \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../threads/list.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../machine/timer.h
interrupt.o: ../machine/interrupt.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/interrupt.h ../threads/list.h \
 ../threads/copyright.h ../threads/utility.h ../threads/bool.h \
 ../machine/sysdep.h /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/system.h \
 ../threads/thread.h ../machine/machine.h ../threads/utility.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 ../threads/list.h ../machine/interrupt.h ../machine/stats.h \
 ../machine/timer.h
sysdep.o: ../machine/sysdep.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h /usr/include/stdio.h /usr/include/features.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/xlocale.h /usr/include/signal.h \
 /usr/include/bits/sigset.h /usr/include/bits/signum.h \
 /usr/include/time.h /usr/include/bits/siginfo.h \
 /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h \
 /usr/include/bits/sigstack.h /usr/include/sys/ucontext.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/sigthread.h \
 /usr/include/sys/types.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/time.h \
 /usr/include/sys/sysmacros.h /usr/include/sys/time.h \
 /usr/include/sys/socket.h /usr/include/sys/uio.h /usr/include/bits/uio.h \
 /usr/include/bits/socket.h /usr/include/bits/socket_type.h \
 /usr/include/bits/sockaddr.h /usr/include/asm/socket.h \
 /usr/include/asm-generic/socket.h /usr/include/asm/sockios.h \
 /usr/include/asm-generic/sockios.h /usr/include/sys/file.h \
 /usr/include/fcntl.h /usr/include/bits/fcntl.h \
 /usr/include/bits/fcntl-linux.h /usr/include/bits/stat.h \
 /usr/include/sys/un.h /usr/include/sys/mman.h /usr/include/bits/mman.h \
 /usr/include/bits/mman-linux.h /usr/include/unistd.h \
 /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
 /usr/include/bits/confname.h /usr/include/getopt.h /usr/include/errno.h \
 /usr/include/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/asm/errno.h /usr/include/asm-generic/errno.h \
 /usr/include/asm-generic/errno-base.h ../machine/interrupt.h \
 ../threads/list.h ../threads/copyright.h ../threads/utility.h \
 ../threads/bool.h ../machine/sysdep.h /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/bits/wchar.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/bits/sched.h \
 /usr/include/bits/timex.h /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/5/cstdio \
 /usr/include/c++/5/cerrno /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/system.h \
 ../threads/thread.h ../machine/machine.h ../threads/utility.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 ../threads/list.h ../machine/interrupt.h ../machine/stats.h \
 ../machine/timer.h
stats.o: ../machine/stats.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/utility.h ../threads/copyright.h \
 ../threads/bool.h ../machine/sysdep.h /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../machine/stats.h
timer.o: ../machine/timer.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/timer.h ../threads/utility.h \
 ../threads/copyright.h ../threads/bool.h ../machine/sysdep.h \
 /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/system.h \
 ../threads/utility.h ../threads/thread.h ../machine/machine.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 ../threads/list.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h
addrspace.o: ../userprog/addrspace.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/system.h ../threads/copyright.h \
 ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
 /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/thread.h \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../threads/list.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../machine/timer.h ../userprog/addrspace.h ../bin/noff.h
bitmap.o: ../userprog/bitmap.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../userprog/bitmap.h ../threads/utility.h \
 ../threads/copyright.h ../threads/bool.h ../machine/sysdep.h \
 /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../filesys/openfile.h
exception.o: ../userprog/exception.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/system.h ../threads/copyright.h \
 ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
 /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/thread.h \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../threads/list.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../machine/timer.h ../userprog/syscall.h
progtest.o: ../userprog/progtest.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/system.h ../threads/copyright.h \
 ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
 /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/thread.h \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../threads/list.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../machine/timer.h ../machine/console.h ../userprog/addrspace.h \
 ../threads/synch.h
console.o: ../machine/console.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/console.h ../threads/utility.h \
 ../threads/copyright.h ../threads/bool.h ../machine/sysdep.h \
 /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../threads/system.h \
 ../threads/utility.h ../threads/thread.h ../machine/machine.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 ../threads/list.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h
machine.o: ../machine/machine.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/machine.h ../threads/utility.h \
 ../threads/copyright.h ../threads/bool.h ../machine/sysdep.h \
 /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../machine/translate.h \
 ../machine/disk.h ../threads/system.h ../threads/utility.h \
 ../threads/thread.h ../machine/machine.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 ../threads/list.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h
mipssim.o: ../machine/mipssim.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/machine.h ../threads/utility.h \
 ../threads/copyright.h ../threads/bool.h ../machine/sysdep.h \
 /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../machine/translate.h \
 ../machine/disk.h ../machine/mipssim.h ../threads/system.h \
 ../threads/utility.h ../threads/thread.h ../machine/machine.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
 ../threads/list.h ../machine/stats.h ../machine/timer.h
translate.o: ../machine/translate.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/machine.h ../threads/utility.h \
 ../threads/copyright.h ../threads/bool.h ../machine/sysdep.h \
 /usr/include/c++/5/iostream \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-32.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
 /usr/include/bits/wchar.h \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/exception_ptr.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/nested_exception.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h /usr/include/c++/5/type_traits \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h /usr/include/c++/5/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h /usr/include/stdint.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/c++/5/bits/ios_base.h \
 /usr/include/c++/5/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/initializer_list \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/alloc_traits.h \
 /usr/include/c++/5/ext/string_conversions.h /usr/include/c++/5/cstdlib \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/5/cstdio /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/5/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/5/bits/functional_hash.h \
 /usr/include/c++/5/bits/hash_bytes.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc \
 /usr/include/c++/5/system_error \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/error_constants.h \
 /usr/include/c++/5/stdexcept /usr/include/c++/5/streambuf \
 /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/5/32/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/system.h ../threads/utility.h \
 ../threads/thread.h ../machine/machine.h ../threads/scheduler.h \
 ../threads/list.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h
# DEPENDENCIES MUST END AT END OF FILE
# IF YOU PUT STUFF HERE IT WILL GO AWAY
# see make depend above
