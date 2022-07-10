#ifndef  SPI_H
#define SPI_H

    typedef struct {
    int gpio_spi_miso = 13;
    int gpio_spi_mosi = 23;
    int gpio_spi_ss = 4;
} t_config_bus_slave;

    enum bus_psi {
        slave,
        master,
    };
class SPI {
    public:
    void prinf_spi(void);

};


#endif