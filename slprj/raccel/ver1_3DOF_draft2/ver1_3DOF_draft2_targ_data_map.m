    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 10;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 23;
            section.data(23)  = dumData; %prealloc

                    ;% rtP.current_height
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.current_pitch
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.current_vel
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.DrydenWindTurbulenceModelDiscreteqr_L_high
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.DrydenWindTurbulenceModelDiscreteqr_Seed
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.DrydenWindTurbulenceModelDiscreteqr_T_on
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 8;

                    ;% rtP.WhiteNoise_Ts
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 9;

                    ;% rtP.DrydenWindTurbulenceModelDiscreteqr_TurbProb
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 10;

                    ;% rtP.DrydenWindTurbulenceModelDiscreteqr_W20
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 11;

                    ;% rtP.DrydenWindTurbulenceModelDiscreteqr_Wdeg
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 12;

                    ;% rtP.DrydenWindTurbulenceModelDiscreteqr_Wingspan
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 13;

                    ;% rtP.COESAAtmosphereModel_action
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 14;

                    ;% rtP.Distanceintogustx_d_m
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 15;

                    ;% rtP.Distanceintogusty_d_m
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 16;

                    ;% rtP.Distanceintogustz_d_m
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 17;

                    ;% rtP.DiscreteWindGustModel1_d_m
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 18;

                    ;% rtP.Distanceintogustx_d_m_dqou0x0xrn
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 21;

                    ;% rtP.Distanceintogusty_d_m_gim0l1ebzs
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 22;

                    ;% rtP.Distanceintogustz_d_m_ishqd0dad1
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 23;

                    ;% rtP.WhiteNoise_pwr
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 24;

                    ;% rtP.DiscreteWindGustModel1_t_0
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 28;

                    ;% rtP.DiscreteWindGustModel_t_0
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 29;

                    ;% rtP.DiscreteWindGustModel1_v_m
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 30;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtP.DiscreteWindGustModel1_Gx
                    section.data(1).logicalSrcIdx = 23;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.DiscreteWindGustModel_Gx
                    section.data(2).logicalSrcIdx = 24;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.DiscreteWindGustModel1_Gy
                    section.data(3).logicalSrcIdx = 25;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.DiscreteWindGustModel_Gy
                    section.data(4).logicalSrcIdx = 26;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.DiscreteWindGustModel1_Gz
                    section.data(5).logicalSrcIdx = 27;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.DiscreteWindGustModel_Gz
                    section.data(6).logicalSrcIdx = 28;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 100;
            section.data(100)  = dumData; %prealloc

                    ;% rtP.pgw_Y0
                    section.data(1).logicalSrcIdx = 29;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.u_Gain
                    section.data(2).logicalSrcIdx = 30;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.dt_Gain
                    section.data(3).logicalSrcIdx = 31;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.UnitDelay_InitialCondition
                    section.data(4).logicalSrcIdx = 32;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.Constant_Value
                    section.data(5).logicalSrcIdx = 33;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Constant1_Value
                    section.data(6).logicalSrcIdx = 34;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Constant2_Value
                    section.data(7).logicalSrcIdx = 35;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.dt1_Gain
                    section.data(8).logicalSrcIdx = 36;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.qgw_Y0
                    section.data(9).logicalSrcIdx = 37;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.dt_Gain_dd5gnplcmj
                    section.data(10).logicalSrcIdx = 38;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.UnitDelay_InitialCondition_pwarikqkkg
                    section.data(11).logicalSrcIdx = 39;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.UnitDelay1_InitialCondition
                    section.data(12).logicalSrcIdx = 40;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.Constant_Value_mc3ng20zp3
                    section.data(13).logicalSrcIdx = 41;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.dt1_Gain_nztsi2a1kq
                    section.data(14).logicalSrcIdx = 42;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.rgw_Y0
                    section.data(15).logicalSrcIdx = 43;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.dt_Gain_f0lm3egpry
                    section.data(16).logicalSrcIdx = 44;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.UnitDelay_InitialCondition_byfhr24th5
                    section.data(17).logicalSrcIdx = 45;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.UnitDelay1_InitialCondition_gvw5z1apgo
                    section.data(18).logicalSrcIdx = 46;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.Constant_Value_cyiae5qdaq
                    section.data(19).logicalSrcIdx = 47;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.dt1_Gain_nta1kkksv5
                    section.data(20).logicalSrcIdx = 48;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.ugw_Y0
                    section.data(21).logicalSrcIdx = 49;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.u_Gain_e0zlfgmyiz
                    section.data(22).logicalSrcIdx = 50;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.dt_Gain_pxqvpbvf4u
                    section.data(23).logicalSrcIdx = 51;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.UnitDelay_InitialCondition_axjdscgnbh
                    section.data(24).logicalSrcIdx = 52;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.Constant_Value_e1xlqjuxc5
                    section.data(25).logicalSrcIdx = 53;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.vgw_Y0
                    section.data(26).logicalSrcIdx = 54;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.u_Gain_ky430x1en1
                    section.data(27).logicalSrcIdx = 55;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.dt_Gain_msbw321ckr
                    section.data(28).logicalSrcIdx = 56;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.UnitDelay_InitialCondition_bvmi2vzu1n
                    section.data(29).logicalSrcIdx = 57;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.Constant_Value_cr2kwqvzxu
                    section.data(30).logicalSrcIdx = 58;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.wgw_Y0
                    section.data(31).logicalSrcIdx = 59;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.u_Gain_p0stpplhad
                    section.data(32).logicalSrcIdx = 60;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.dt_Gain_leuqrst5ru
                    section.data(33).logicalSrcIdx = 61;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.UnitDelay_InitialCondition_lkw5bbronu
                    section.data(34).logicalSrcIdx = 62;
                    section.data(34).dtTransOffset = 33;

                    ;% rtP.Constant_Value_i1pvkuyoub
                    section.data(35).logicalSrcIdx = 63;
                    section.data(35).dtTransOffset = 34;

                    ;% rtP.Gain_Gain
                    section.data(36).logicalSrcIdx = 64;
                    section.data(36).dtTransOffset = 35;

                    ;% rtP.max_height_low_Value
                    section.data(37).logicalSrcIdx = 65;
                    section.data(37).dtTransOffset = 36;

                    ;% rtP.min_height_high_Value
                    section.data(38).logicalSrcIdx = 66;
                    section.data(38).dtTransOffset = 37;

                    ;% rtP.Gain_Gain_jecly514iu
                    section.data(39).logicalSrcIdx = 67;
                    section.data(39).dtTransOffset = 38;

                    ;% rtP.max_height_low_Value_kq15juzkkq
                    section.data(40).logicalSrcIdx = 68;
                    section.data(40).dtTransOffset = 39;

                    ;% rtP.min_height_high_Value_ou01ccqz5e
                    section.data(41).logicalSrcIdx = 69;
                    section.data(41).dtTransOffset = 40;

                    ;% rtP.Integrator_IC
                    section.data(42).logicalSrcIdx = 70;
                    section.data(42).dtTransOffset = 41;

                    ;% rtP.Integrator1_IC
                    section.data(43).logicalSrcIdx = 71;
                    section.data(43).dtTransOffset = 42;

                    ;% rtP.Integrator2_IC
                    section.data(44).logicalSrcIdx = 72;
                    section.data(44).dtTransOffset = 43;

                    ;% rtP.uDLookupTable_tableData
                    section.data(45).logicalSrcIdx = 73;
                    section.data(45).dtTransOffset = 44;

                    ;% rtP.uDLookupTable_bp01Data
                    section.data(46).logicalSrcIdx = 74;
                    section.data(46).dtTransOffset = 831;

                    ;% rtP.LimitFunction10ftto1000ft_UpperSat
                    section.data(47).logicalSrcIdx = 75;
                    section.data(47).dtTransOffset = 1618;

                    ;% rtP.LimitFunction10ftto1000ft_LowerSat
                    section.data(48).logicalSrcIdx = 76;
                    section.data(48).dtTransOffset = 1619;

                    ;% rtP.LimitHeighth1000ft_UpperSat
                    section.data(49).logicalSrcIdx = 77;
                    section.data(49).dtTransOffset = 1620;

                    ;% rtP.LimitHeighth1000ft_LowerSat
                    section.data(50).logicalSrcIdx = 78;
                    section.data(50).dtTransOffset = 1621;

                    ;% rtP.PreLookUpIndexSearchaltitude_BreakpointsData
                    section.data(51).logicalSrcIdx = 79;
                    section.data(51).dtTransOffset = 1622;

                    ;% rtP.MediumHighAltitudeIntensity_Table
                    section.data(52).logicalSrcIdx = 80;
                    section.data(52).dtTransOffset = 1634;

                    ;% rtP.WhiteNoise_Mean
                    section.data(53).logicalSrcIdx = 81;
                    section.data(53).dtTransOffset = 1718;

                    ;% rtP.WhiteNoise_StdDev
                    section.data(54).logicalSrcIdx = 82;
                    section.data(54).dtTransOffset = 1719;

                    ;% rtP.Lv_Gain
                    section.data(55).logicalSrcIdx = 83;
                    section.data(55).dtTransOffset = 1720;

                    ;% rtP.Lw_Gain
                    section.data(56).logicalSrcIdx = 84;
                    section.data(56).dtTransOffset = 1721;

                    ;% rtP.u2rhoV2_Gain
                    section.data(57).logicalSrcIdx = 85;
                    section.data(57).dtTransOffset = 1722;

                    ;% rtP.Switch_Threshold
                    section.data(58).logicalSrcIdx = 86;
                    section.data(58).dtTransOffset = 1723;

                    ;% rtP.Integrator_IC_iltpotqliy
                    section.data(59).logicalSrcIdx = 87;
                    section.data(59).dtTransOffset = 1724;

                    ;% rtP.Switch_Threshold_ouid5vbrll
                    section.data(60).logicalSrcIdx = 88;
                    section.data(60).dtTransOffset = 1725;

                    ;% rtP.thrustcurveN5800_tableData
                    section.data(61).logicalSrcIdx = 89;
                    section.data(61).dtTransOffset = 1726;

                    ;% rtP.thrustcurveN5800_bp01Data
                    section.data(62).logicalSrcIdx = 90;
                    section.data(62).dtTransOffset = 1741;

                    ;% rtP.Integrator3_IC
                    section.data(63).logicalSrcIdx = 91;
                    section.data(63).dtTransOffset = 1756;

                    ;% rtP.ExtensionPlan_tableData
                    section.data(64).logicalSrcIdx = 92;
                    section.data(64).dtTransOffset = 1757;

                    ;% rtP.ExtensionPlan_bp01Data
                    section.data(65).logicalSrcIdx = 93;
                    section.data(65).dtTransOffset = 1778;

                    ;% rtP.Gain_Gain_aepuuv4xlg
                    section.data(66).logicalSrcIdx = 94;
                    section.data(66).dtTransOffset = 1799;

                    ;% rtP.increasingvelocity_tableData
                    section.data(67).logicalSrcIdx = 95;
                    section.data(67).dtTransOffset = 1800;

                    ;% rtP.increasingvelocity_bp01Data
                    section.data(68).logicalSrcIdx = 96;
                    section.data(68).dtTransOffset = 1808;

                    ;% rtP.Gain1_Gain
                    section.data(69).logicalSrcIdx = 97;
                    section.data(69).dtTransOffset = 1816;

                    ;% rtP.Totalinitialmass_Value
                    section.data(70).logicalSrcIdx = 98;
                    section.data(70).dtTransOffset = 1817;

                    ;% rtP.Constant_Value_j4uvipadjw
                    section.data(71).logicalSrcIdx = 99;
                    section.data(71).dtTransOffset = 1818;

                    ;% rtP.Constant1_Value_j5lbep2i5s
                    section.data(72).logicalSrcIdx = 100;
                    section.data(72).dtTransOffset = 1819;

                    ;% rtP.area_ref_Value
                    section.data(73).logicalSrcIdx = 101;
                    section.data(73).dtTransOffset = 1820;

                    ;% rtP.length_ref_Value
                    section.data(74).logicalSrcIdx = 102;
                    section.data(74).dtTransOffset = 1821;

                    ;% rtP.totalimpulse_Value
                    section.data(75).logicalSrcIdx = 103;
                    section.data(75).dtTransOffset = 1822;

                    ;% rtP.propellantmass_Value
                    section.data(76).logicalSrcIdx = 104;
                    section.data(76).dtTransOffset = 1823;

                    ;% rtP.Constant_Value_ljjrc4ac51
                    section.data(77).logicalSrcIdx = 105;
                    section.data(77).dtTransOffset = 1824;

                    ;% rtP.Constant_Value_bnuzop5o1l
                    section.data(78).logicalSrcIdx = 106;
                    section.data(78).dtTransOffset = 1827;

                    ;% rtP.l_Value
                    section.data(79).logicalSrcIdx = 107;
                    section.data(79).dtTransOffset = 1828;

                    ;% rtP.d_Value
                    section.data(80).logicalSrcIdx = 108;
                    section.data(80).dtTransOffset = 1829;

                    ;% rtP.area_ref_Value_agropua0cl
                    section.data(81).logicalSrcIdx = 109;
                    section.data(81).dtTransOffset = 1830;

                    ;% rtP.correctionconstant_Value
                    section.data(82).logicalSrcIdx = 110;
                    section.data(82).dtTransOffset = 1831;

                    ;% rtP.Al_Value
                    section.data(83).logicalSrcIdx = 111;
                    section.data(83).dtTransOffset = 1832;

                    ;% rtP.Constant_Value_nh4qnxlmtb
                    section.data(84).logicalSrcIdx = 112;
                    section.data(84).dtTransOffset = 1833;

                    ;% rtP.area_ref_Value_ogzj0ybhah
                    section.data(85).logicalSrcIdx = 113;
                    section.data(85).dtTransOffset = 1834;

                    ;% rtP.length_ref_Value_jqw25fydac
                    section.data(86).logicalSrcIdx = 114;
                    section.data(86).dtTransOffset = 1835;

                    ;% rtP.lengthofrocket_Value
                    section.data(87).logicalSrcIdx = 115;
                    section.data(87).dtTransOffset = 1836;

                    ;% rtP.volume_Value
                    section.data(88).logicalSrcIdx = 116;
                    section.data(88).dtTransOffset = 1837;

                    ;% rtP.Sideforcecoefficient_Value
                    section.data(89).logicalSrcIdx = 117;
                    section.data(89).dtTransOffset = 1838;

                    ;% rtP.u_Value
                    section.data(90).logicalSrcIdx = 118;
                    section.data(90).dtTransOffset = 1839;

                    ;% rtP.sigma_wg_Gain
                    section.data(91).logicalSrcIdx = 119;
                    section.data(91).dtTransOffset = 1840;

                    ;% rtP.PreLookUpIndexSearchprobofexceed_BreakpointsData
                    section.data(92).logicalSrcIdx = 120;
                    section.data(92).dtTransOffset = 1841;

                    ;% rtP.area_ref_Value_fcrkhd1pwn
                    section.data(93).logicalSrcIdx = 121;
                    section.data(93).dtTransOffset = 1848;

                    ;% rtP.Constant_Value_c1kdrdr2wo
                    section.data(94).logicalSrcIdx = 122;
                    section.data(94).dtTransOffset = 1849;

                    ;% rtP.extension_Value
                    section.data(95).logicalSrcIdx = 123;
                    section.data(95).dtTransOffset = 1852;

                    ;% rtP.gravityg_Value
                    section.data(96).logicalSrcIdx = 124;
                    section.data(96).dtTransOffset = 1853;

                    ;% rtP.rollmomentcoefficient_Value
                    section.data(97).logicalSrcIdx = 125;
                    section.data(97).dtTransOffset = 1854;

                    ;% rtP.Constant_Value_exs12nteho
                    section.data(98).logicalSrcIdx = 126;
                    section.data(98).dtTransOffset = 1855;

                    ;% rtP.Constant1_Value_ivo13icu2r
                    section.data(99).logicalSrcIdx = 127;
                    section.data(99).dtTransOffset = 1856;

                    ;% rtP.yawmomentcoefficient_Value
                    section.data(100).logicalSrcIdx = 128;
                    section.data(100).dtTransOffset = 1857;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.MediumHighAltitudeIntensity_maxIndex
                    section.data(1).logicalSrcIdx = 129;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtP.gvg1dfussm.x_Y0
                    section.data(1).logicalSrcIdx = 130;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.gvg1dfussm.DistanceintoGustxLimitedtogustlengthd_IC
                    section.data(2).logicalSrcIdx = 131;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.gvg1dfussm.DistanceintoGustxLimitedtogustlengthd_LowerSat
                    section.data(3).logicalSrcIdx = 132;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtP.n5ulon0gce.x_Y0
                    section.data(1).logicalSrcIdx = 133;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.n5ulon0gce.DistanceintoGustxLimitedtogustlengthd_IC
                    section.data(2).logicalSrcIdx = 134;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.n5ulon0gce.DistanceintoGustxLimitedtogustlengthd_LowerSat
                    section.data(3).logicalSrcIdx = 135;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtP.jtzk2crbxn.x_Y0
                    section.data(1).logicalSrcIdx = 136;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.jtzk2crbxn.DistanceintoGustxLimitedtogustlengthd_IC
                    section.data(2).logicalSrcIdx = 137;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.jtzk2crbxn.DistanceintoGustxLimitedtogustlengthd_LowerSat
                    section.data(3).logicalSrcIdx = 138;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtP.he3nztz2xz.x_Y0
                    section.data(1).logicalSrcIdx = 139;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.he3nztz2xz.DistanceintoGustxLimitedtogustlengthd_IC
                    section.data(2).logicalSrcIdx = 140;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.he3nztz2xz.DistanceintoGustxLimitedtogustlengthd_LowerSat
                    section.data(3).logicalSrcIdx = 141;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtP.ger0owotcqg.x_Y0
                    section.data(1).logicalSrcIdx = 142;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.ger0owotcqg.DistanceintoGustxLimitedtogustlengthd_IC
                    section.data(2).logicalSrcIdx = 143;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.ger0owotcqg.DistanceintoGustxLimitedtogustlengthd_LowerSat
                    section.data(3).logicalSrcIdx = 144;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtP.ll11mjwfrfq.x_Y0
                    section.data(1).logicalSrcIdx = 145;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.ll11mjwfrfq.DistanceintoGustxLimitedtogustlengthd_IC
                    section.data(2).logicalSrcIdx = 146;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.ll11mjwfrfq.DistanceintoGustxLimitedtogustlengthd_LowerSat
                    section.data(3).logicalSrcIdx = 147;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(10) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 9;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 48;
            section.data(48)  = dumData; %prealloc

                    ;% rtB.hz2kmtqu1f
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.o3s4fcgwmt
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.detk0s4fqu
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.brwswwy2ms
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.m02klal15g
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.h0oni2qr14
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.pbgkhmfpry
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.p4s2k254ea
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.ahu0mnszbx
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.dez2mrpu5t
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.kszf3wzrkw
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.od2fp5g24u
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtB.hspoedt4x1
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 14;

                    ;% rtB.auftp4d5el
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 17;

                    ;% rtB.nk4to3tqks
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 18;

                    ;% rtB.jzq2oluchc
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 19;

                    ;% rtB.omggdvqf00
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 20;

                    ;% rtB.amcljpynk0
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 21;

                    ;% rtB.dcxuq4g2al
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 22;

                    ;% rtB.n0hunpaunb
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 23;

                    ;% rtB.cdfbg3lury
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 24;

                    ;% rtB.hrazt0r2wn
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 25;

                    ;% rtB.et5dubzkzh
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 26;

                    ;% rtB.lkc3j3yuwh
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 27;

                    ;% rtB.ji5szdrtlz
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 28;

                    ;% rtB.pj53y2b3p4
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 29;

                    ;% rtB.n2ko3ely1v
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 35;

                    ;% rtB.a12gzgkxk1
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 36;

                    ;% rtB.imuryazloq
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 37;

                    ;% rtB.esteppb0zl
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 38;

                    ;% rtB.b2dbyc1czi
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 39;

                    ;% rtB.gf45ascklx
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 40;

                    ;% rtB.kltm5q5tqr
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 41;

                    ;% rtB.bui0byvgel
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 42;

                    ;% rtB.dqz4xqyfqe
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 43;

                    ;% rtB.pl0jd11r4n
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 44;

                    ;% rtB.gu3b4yt5xh
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 45;

                    ;% rtB.kl4flpfp4i
                    section.data(38).logicalSrcIdx = 39;
                    section.data(38).dtTransOffset = 49;

                    ;% rtB.j4ludbxjtl
                    section.data(39).logicalSrcIdx = 40;
                    section.data(39).dtTransOffset = 50;

                    ;% rtB.oqkrhxecua
                    section.data(40).logicalSrcIdx = 41;
                    section.data(40).dtTransOffset = 51;

                    ;% rtB.k4g5orb5le
                    section.data(41).logicalSrcIdx = 42;
                    section.data(41).dtTransOffset = 53;

                    ;% rtB.kpyi2sl22z
                    section.data(42).logicalSrcIdx = 43;
                    section.data(42).dtTransOffset = 55;

                    ;% rtB.bpo25katpj
                    section.data(43).logicalSrcIdx = 44;
                    section.data(43).dtTransOffset = 57;

                    ;% rtB.dsg4323yrq
                    section.data(44).logicalSrcIdx = 45;
                    section.data(44).dtTransOffset = 59;

                    ;% rtB.g23b0jm4op
                    section.data(45).logicalSrcIdx = 46;
                    section.data(45).dtTransOffset = 60;

                    ;% rtB.ap5uo0kana
                    section.data(46).logicalSrcIdx = 47;
                    section.data(46).dtTransOffset = 62;

                    ;% rtB.eocpymidke
                    section.data(47).logicalSrcIdx = 48;
                    section.data(47).dtTransOffset = 63;

                    ;% rtB.kgnnktcay5
                    section.data(48).logicalSrcIdx = 49;
                    section.data(48).dtTransOffset = 65;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.jlp2ppl0vn
                    section.data(1).logicalSrcIdx = 50;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtB.gku0fw43pi
                    section.data(1).logicalSrcIdx = 51;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.fd1l0pzkss
                    section.data(2).logicalSrcIdx = 52;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.dqyzhpatpx
                    section.data(3).logicalSrcIdx = 53;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.lxbsoqncto
                    section.data(4).logicalSrcIdx = 54;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.cjukmufvjx
                    section.data(5).logicalSrcIdx = 55;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.bhya5jpb3h
                    section.data(6).logicalSrcIdx = 56;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.gvg1dfussm.odt0bd1y2u
                    section.data(1).logicalSrcIdx = 57;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.n5ulon0gce.odt0bd1y2u
                    section.data(1).logicalSrcIdx = 58;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.jtzk2crbxn.heioiu1r3j
                    section.data(1).logicalSrcIdx = 59;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.he3nztz2xz.odt0bd1y2u
                    section.data(1).logicalSrcIdx = 60;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.ger0owotcqg.odt0bd1y2u
                    section.data(1).logicalSrcIdx = 61;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.ll11mjwfrfq.heioiu1r3j
                    section.data(1).logicalSrcIdx = 62;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(9) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 19;
        sectIdxOffset = 9;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% rtDW.e2hziedsbk
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.cm32h5zuyd
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.g4vgu4eh5q
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.n03y0na0km
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.l2twxmlcem
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 5;

                    ;% rtDW.axocjnebjt
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 7;

                    ;% rtDW.cc1zgnydar
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 9;

                    ;% rtDW.dtrqh0jzdm
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 11;

                    ;% rtDW.be3zbv11ep
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 13;

                    ;% rtDW.j0fq3kqpc1
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 15;

                    ;% rtDW.iwyty5ttci
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 17;

                    ;% rtDW.npog0sgne3
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 19;

                    ;% rtDW.fghcnn10kv
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 20;

                    ;% rtDW.nqlh5ds4cz
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 61;

                    ;% rtDW.pmg45wdlle
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 102;

                    ;% rtDW.agqjtql55m
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 143;

                    ;% rtDW.hfvwtrx3vv
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 146;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 18;
            section.data(18)  = dumData; %prealloc

                    ;% rtDW.k22avhip4l.LoggedData
                    section.data(1).logicalSrcIdx = 17;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.kqlnedaru4.LoggedData
                    section.data(2).logicalSrcIdx = 18;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.lgozs3hhbz.LoggedData
                    section.data(3).logicalSrcIdx = 19;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.nlnaokhuqi.LoggedData
                    section.data(4).logicalSrcIdx = 20;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.hqdmt1uvxz.LoggedData
                    section.data(5).logicalSrcIdx = 21;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.lvivt402or.LoggedData
                    section.data(6).logicalSrcIdx = 22;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.ftk2p113mj.LoggedData
                    section.data(7).logicalSrcIdx = 23;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.gsjwbi101m.LoggedData
                    section.data(8).logicalSrcIdx = 24;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.en2kejl0u5.LoggedData
                    section.data(9).logicalSrcIdx = 25;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.mexrcbcf3j.LoggedData
                    section.data(10).logicalSrcIdx = 26;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.dqey5ojoes.AQHandles
                    section.data(11).logicalSrcIdx = 27;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.gndom1iial.AQHandles
                    section.data(12).logicalSrcIdx = 28;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.dxljsvtavp.LoggedData
                    section.data(13).logicalSrcIdx = 29;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.fjigp44sul.LoggedData
                    section.data(14).logicalSrcIdx = 30;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.hcxsxkryei.LoggedData
                    section.data(15).logicalSrcIdx = 31;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.pl3wiifq4y.LoggedData
                    section.data(16).logicalSrcIdx = 32;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.lh1anqbya0.LoggedData
                    section.data(17).logicalSrcIdx = 33;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.kb3volnjlk.LoggedData
                    section.data(18).logicalSrcIdx = 34;
                    section.data(18).dtTransOffset = 17;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.jnncd2sq4w
                    section.data(1).logicalSrcIdx = 35;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.mmhkwxx3ki
                    section.data(2).logicalSrcIdx = 36;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.evedzazbq1
                    section.data(1).logicalSrcIdx = 37;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.nphcpd4kp1
                    section.data(2).logicalSrcIdx = 38;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.b4b4xbh0zy
                    section.data(3).logicalSrcIdx = 39;
                    section.data(3).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 14;
            section.data(14)  = dumData; %prealloc

                    ;% rtDW.mchbqbzbsu
                    section.data(1).logicalSrcIdx = 40;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.iyux1j0x3a
                    section.data(2).logicalSrcIdx = 41;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.p4skp3dttn
                    section.data(3).logicalSrcIdx = 42;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.ndrlkc3b34
                    section.data(4).logicalSrcIdx = 43;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.ldf3zjiz4i
                    section.data(5).logicalSrcIdx = 44;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.adl1bl4joc
                    section.data(6).logicalSrcIdx = 45;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.cvm0mb4zot
                    section.data(7).logicalSrcIdx = 46;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.j4iw55pfet
                    section.data(8).logicalSrcIdx = 47;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.kyu40ob1un
                    section.data(9).logicalSrcIdx = 48;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.eiolx41ugz
                    section.data(10).logicalSrcIdx = 49;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.l1ximba4da
                    section.data(11).logicalSrcIdx = 50;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.g5qs0iunrk
                    section.data(12).logicalSrcIdx = 51;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.ond2pizxua
                    section.data(13).logicalSrcIdx = 52;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.dozjmoymwu
                    section.data(14).logicalSrcIdx = 53;
                    section.data(14).dtTransOffset = 13;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.gou0cyiqo0
                    section.data(1).logicalSrcIdx = 54;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.cxapz0c1jg
                    section.data(2).logicalSrcIdx = 55;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 11;
            section.data(11)  = dumData; %prealloc

                    ;% rtDW.hhl5e4wghu
                    section.data(1).logicalSrcIdx = 56;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ho1eexse32
                    section.data(2).logicalSrcIdx = 57;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ixwzcimkbe
                    section.data(3).logicalSrcIdx = 58;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.pspabon31m
                    section.data(4).logicalSrcIdx = 59;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.hqfdair2to
                    section.data(5).logicalSrcIdx = 60;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.lcggv1dr2l
                    section.data(6).logicalSrcIdx = 61;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.hpz1gyhn0z
                    section.data(7).logicalSrcIdx = 62;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.op3ivjjjc3
                    section.data(8).logicalSrcIdx = 63;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.aj0tzh3kxr
                    section.data(9).logicalSrcIdx = 64;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.g2zzh5btgc
                    section.data(10).logicalSrcIdx = 65;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.jhohwk2pcr
                    section.data(11).logicalSrcIdx = 66;
                    section.data(11).dtTransOffset = 10;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.gvg1dfussm.iwd5hf3e4b
                    section.data(1).logicalSrcIdx = 67;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.gvg1dfussm.ncvavhwoml
                    section.data(1).logicalSrcIdx = 68;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.n5ulon0gce.iwd5hf3e4b
                    section.data(1).logicalSrcIdx = 69;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.n5ulon0gce.ncvavhwoml
                    section.data(1).logicalSrcIdx = 70;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.jtzk2crbxn.fgmjumzbkr
                    section.data(1).logicalSrcIdx = 71;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.jtzk2crbxn.bxuyreg3bt
                    section.data(1).logicalSrcIdx = 72;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.he3nztz2xz.iwd5hf3e4b
                    section.data(1).logicalSrcIdx = 73;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.he3nztz2xz.ncvavhwoml
                    section.data(1).logicalSrcIdx = 74;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ger0owotcqg.iwd5hf3e4b
                    section.data(1).logicalSrcIdx = 75;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ger0owotcqg.ncvavhwoml
                    section.data(1).logicalSrcIdx = 76;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(17) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ll11mjwfrfq.fgmjumzbkr
                    section.data(1).logicalSrcIdx = 77;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(18) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ll11mjwfrfq.bxuyreg3bt
                    section.data(1).logicalSrcIdx = 78;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(19) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 3596416260;
    targMap.checksum1 = 609365716;
    targMap.checksum2 = 666158425;
    targMap.checksum3 = 577418733;

