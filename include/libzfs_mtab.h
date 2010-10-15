#if !defined(__LIBZFS_MTAB_H__)
#define __LIBZFS_MTAB_H__

extern int zfs_linux_add_entry(char *mountpoint, char *zfs_name, const char *mtab_file);
extern int zfs_linux_remove_entry(const char *mountpoint, 
		const char *zfs_name, const char *mtab_file);

#endif
