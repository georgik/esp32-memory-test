#include <stdio.h>
#include "esp_heap_caps.h"

void app_main()
{
    printf("Free heap memory: %d bytes\n", heap_caps_get_free_size(MALLOC_CAP_8BIT));
}
