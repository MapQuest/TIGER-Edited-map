<Style name="world">
    <Rule>
        &maxscale_zoom0;
        &minscale_zoom9;
        <PolygonSymbolizer fill="#faf8ed"/>
    </Rule>
</Style>
<Style name="coast-poly">
    <Rule>
        &maxscale_zoom10;
        <PolygonSymbolizer fill="#f6f3e9"/>
    </Rule>
</Style>

<Layer name="world" status="on" srs="&srs900913;">
    <StyleName>world</StyleName>
    <Datasource>
        <Parameter name="type">shape</Parameter>
        <Parameter name="file">&world_boundaries;/shoreline_300</Parameter>
    </Datasource>
</Layer>
<Layer name="coast-poly" status="on" srs="&srs900913;">
    <StyleName>coast-poly</StyleName>
    <Datasource>
        <Parameter name="type">shape</Parameter>
        <Parameter name="file">&world_boundaries;/processed_p</Parameter>
    </Datasource>
</Layer>

