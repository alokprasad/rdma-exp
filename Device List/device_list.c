#include <stdio.h>
#include <infiniband/verbs.h>
#include <infiniband/arch.h>
//yum install libibverbs-devel
int main(int argc, char *argv[])
{
        struct ibv_device **dev_list;
        int num_devices, i;

        dev_list = ibv_get_device_list(&num_devices);
        if (!dev_list) {
                perror("Failed to get IB devices list");
                return 1;
        }


        for (i = 0; i < num_devices; ++i) {
                printf(" %-16s\t%016llx\n",ibv_get_device_name(dev_list[i]));
        }

        ibv_free_device_list(dev_list);

        return 0;
}